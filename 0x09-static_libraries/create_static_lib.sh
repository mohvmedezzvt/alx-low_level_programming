#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create static library from the object files
ar rcs liball.a *.o

# Index the library
ranlib liball.a

# Remove the object files
rm *.o
