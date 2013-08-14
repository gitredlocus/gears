#!/bin/bash
set -e
mkdir -p $HOME/build && cd $HOME/build
svn co http://llvm.org/svn/llvm-project/llvm/trunk llvm

#Checkout Clang:
cd llvm/tools
svn co http://llvm.org/svn/llvm-project/cfe/trunk clang
cd ../..

#Checkout extra Clang Tools: (optional)
cd llvm/tools/clang/tools
svn co http://llvm.org/svn/llvm-project/clang-tools-extra/trunk extra
cd ../../../..

#Checkout Compiler-RT:
cd llvm/projects
svn co http://llvm.org/svn/llvm-project/compiler-rt/trunk compiler-rt
cd ..

#Build LLVM and Clang:
mkdir build #(for building without polluting the source dir)
cd build
../configure --enable-optimized --enable-targets=host-only --disable-assertions || 
CC=gcc CXX=g++ ../configure --enable-optimized --enable-targets=host-only --disable-assertions
make -j2

#If above step fails try this configuration 
echo "Run sudo make install in $PWD"

