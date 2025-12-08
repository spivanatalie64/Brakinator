#!/bin/bash
set -e

# Basic HandBrake build script

# Function to print usage
print_usage() {
    echo "Usage: $0 [configure_options]"
    echo "  All arguments are passed directly to ./configure"
    echo "  Example: $0 --disable-gtk"
}

# Check for help flag
if [[ "$1" == "--help" || "$1" == "-h" ]]; then
    print_usage
    ./configure --help
    exit 0
fi

echo "Configuring HandBrake..."
# Pass all arguments to configure
./configure "$@"

echo "Entering build directory..."
cd build

echo "Starting build with $(nproc) jobs..."
make -j$(nproc)

echo "Build complete!"
