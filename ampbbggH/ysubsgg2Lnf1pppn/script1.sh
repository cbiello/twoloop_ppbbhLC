#!/bin/bash

# Check if any filename is provided as arguments
if [ $# -eq 0 ]; then
    echo "Usage: $0 <path_to_files>"
    exit 1
fi

# Loop over all files matching the wildcard pattern
for filename in "$1"/Ygg2Lnf1pppn?.cpp; do
    # Check if any files match the pattern
    if [ ! -e "$filename" ]; then
        echo "No matching files found in $1"
        exit 1
    fi

    # Extract function name from filename
    function_name=$(basename "$filename" | sed 's/\..*//')

    # Perform the replacements using sed
    sed -i '1i std::complex<dd_real> res= ' "$filename"
    sed -i '1i std::complex<dd_real> ex6=ex.ex6;' "$filename"
    sed -i '1i std::complex<dd_real> ex5=ex.ex5;' "$filename"
    sed -i '1i std::complex<dd_real> ex4=ex.ex4;' "$filename"
    sed -i '1i std::complex<dd_real> ex3=ex.ex3;' "$filename"
    sed -i '1i std::complex<dd_real> ex2=ex.ex2;' "$filename"
    sed -i '1i std::complex<dd_real> ex1=ex.ex1;' "$filename"
    sed -i "1i std::complex<dd_real> $function_name(ExVariables ex){" "$filename"
    sed -i '1i #include <complex>' "$filename"
    sed -i '1i #include <qd/qd_real.h>' "$filename"
    sed -i '1i #include "listYgg2Lnf1pppn.h" ' "$filename"
    sed -i '1i #include <iostream>' "$filename"
    sed -i 's/Complex/std::complex<dd_real>/g' "$filename"
    sed -i 's/Power/pow/g' "$filename"
    sed -i 's/Fsave(\([1-9]\|[1-9][0-9]\{1,2\}\|[1-4][0-9]\{2\}\|500\))/Fsave[\1]/g' "$filename"

    # Perform the replacements using sed
    sed -i 's/Power/pow/g' "$filename"
    sed -i 's/ex(1.)/ex1/g' "$filename"
    sed -i 's/ex(2.)/ex2/g' "$filename"
    sed -i 's/ex(3.)/ex3/g' "$filename"
    sed -i 's/ex(4.)/ex4/g' "$filename"
    sed -i 's/ex(5.)/ex5/g' "$filename"
    sed -i 's/ex(6.)/ex6/g' "$filename"


    # Append necessary lines at the end of the file
    echo ';' >> "$filename"
    echo 'return res;' >> "$filename"
    echo '}' >> "$filename"

    echo "Replacements completed in $filename"
done

