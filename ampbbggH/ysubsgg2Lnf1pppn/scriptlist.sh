#!/bin/bash

# Check if any filename is provided as arguments
if [ $# -eq 0 ]; then
    echo "Usage: $0 <output_file>"
    exit 1
fi

output_file="$1"

# Generate the content for the header file
header_content=$(find . -maxdepth 1 -type f -name "Y*.cpp" | sed 's/.cpp//' | sed 's/\.\///' | awk -F'/' '{print "std::complex<dd_real> "$NF"(ExVariables ex);"}')
# Redirect the content to the output file
cat << EOF > "$output_file"
#ifndef LISTY
#define LISTY

#include <complex>
#include <qd/qd_real>
#include "../../definition.h"

$header_content

#endif
EOF

echo "File $output_file created."

