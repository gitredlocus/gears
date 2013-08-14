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

