#!/bin/bash

#
# This script copies tools in /opt/redlocus/tools directory
#             copies parsers in /opt/redlocus/parsers directory
#

REDLOCUS_TOOLS_DIR=$PWD
TOOLS_INSTALLATION_DIR=/opt/redlocus/tools
PARSERS_INSTALLATION_DIR=/opt/redlocus/parsers

sudo rm -rf $TOOLS_INSTALLATION_DIR
sudo mkdir -p $TOOLS_INSTALLATION_DIR

sudo cp $REDLOCUS_TOOLS_DIR/C/cloc $TOOLS_INSTALLATION_DIR/cloc
sudo cp $REDLOCUS_TOOLS_DIR/C/pmccabe $TOOLS_INSTALLATION_DIR/pmccabe
sudo cp $REDLOCUS_TOOLS_DIR/C/comments_tool.py $TOOLS_INSTALLATION_DIR/comments_tool.py
sudo cp -R $REDLOCUS_TOOLS_DIR/C/pmd-bin-5.0.5 $TOOLS_INSTALLATION_DIR/pmd-bin-5.0.5
sudo mkdir -p $TOOLS_INSTALLATION_DIR/lcov
sudo cp $REDLOCUS_TOOLS_DIR/C/lcov/geninfo $TOOLS_INSTALLATION_DIR/lcov/geninfo
sudo cp $REDLOCUS_TOOLS_DIR/C/lcov/genhtml $TOOLS_INSTALLATION_DIR/lcov/genhtml
sudo cp -R $REDLOCUS_TOOLS_DIR/C/clang/llvm $TOOLS_INSTALLATION_DIR/llvm

sudo rm -rf $PARSERS_INSTALLATION_DIR
sudo mkdir -p $PARSERS_INSTALLATION_DIR

sudo cp $REDLOCUS_TOOLS_DIR/parsers/mcc_parser.py $PARSERS_INSTALLATION_DIR/mcc_parser.py
sudo cp $REDLOCUS_TOOLS_DIR/parsers/cpd_parser.py $PARSERS_INSTALLATION_DIR/cpd_parser.py
sudo cp $REDLOCUS_TOOLS_DIR/parsers/lcov_parser.py $PARSERS_INSTALLATION_DIR/lcov_parser.py
sudo cp $REDLOCUS_TOOLS_DIR/parsers/clang_parser.py $PARSERS_INSTALLATION_DIR/clang_parser.py
