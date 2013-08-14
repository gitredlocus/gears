#!/bin/bash

echo "Checking out LLVM"
svn co http://llvm.org/svn/llvm-project/llvm/trunk llvm

echo "Checking out Clang"
cd llvm/tools
svn co http://llvm.org/svn/llvm-project/cfe/trunk clang
cd ../..

echo "Checking out extra Clang Tools: (optional)"
cd llvm/tools/clang/tools
svn co http://llvm.org/svn/llvm-project/clang-tools-extra/trunk extra
cd ../../../..

echo "Checking out Compiler-RT"
cd llvm/projects
svn co http://llvm.org/svn/llvm-project/compiler-rt/trunk compiler-rt
cd ..

echo "Building LLVM and Clang"
mkdir build #(for building without polluting the source dir)
cd build
../configure --enable-optimized --disable-assertions 
# CC=gcc CXX=g++ ../configure --enable-optimized --enable-targets=host-only --disable-assertions
make -j8

# All done
echo "Clang is now ready to use"

# If above step fails try this configuration 
# echo "Run sudo make install in $PWD"

# Here is how to run clang
# $PATH_TO_CLANG/llvm/tools/clang/tools/scan-build/scan-build --use-analyzer=$PATH_TO_CLANG/llvm/build/Release/bin/clang make -j8 CC=$PATH_TO_CLANG/llvm/tools/clang/tools/scan-build/ccc-analyzer

# At the end of the run, the defects are available at:
# scan-build: 58 bugs found.
# scan-build: Run 'scan-view /tmp/scan-build-2013-08-03-1' to examine bug reports.

# $PATH_TO_CLANG/llvm/./tools/clang/tools/scan-view/scan-view /tmp/scan-build-2013-08-03-1/
# Starting scan-view at: http://127.0.0.1:8181
#   Use Ctrl-C to exit.
# Created new window in existing browser session.
