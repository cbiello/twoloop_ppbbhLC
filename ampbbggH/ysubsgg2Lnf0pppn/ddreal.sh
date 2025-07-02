#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 directory"
    exit 1
fi

directory="$1"

# Iterate over each file in the directory
for file in "$directory"/*.cpp; do
    temp_file=$(mktemp)
    # Use perl to replace decimal numbers with dd_real(decimal_number)
    perl -pe 's/(?<![\w.])(\d*\.\d+|\d+\.\d*)([eE][+-]?\d+)?/dd_real($&)/g' "$file" > "$temp_file"
    # Move the temporary file back to the original file
    mv "$temp_file" "$file"
    echo "Transformation complete. The file $file has been updated."
done

echo "All files in $directory have been transformed."

