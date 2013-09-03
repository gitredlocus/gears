#!/bin/bash

#
# This script copies tools in /opt/redlocus/tools directory
#             copies parsers in /opt/redlocus/parsers directory
#

REDLOCUS_GEARS_DIR=/home/bmehta/redlocus/gears
REDLOCUS_TOOLS_DIR=/opt/redlocus/tools
REDLOCUS_PARSERS_DIR=/opt/redlocus/parsers

sudo rm -rf $REDLOCUS_TOOLS_DIR
sudo mkdir -p $REDLOCUS_TOOLS_DIR

sudo cp $REDLOCUS_GEARS_DIR/tools/C/cloc $REDLOCUS_TOOLS_DIR/cloc
sudo cp $REDLOCUS_GEARS_DIR/tools/C/pmccabe $REDLOCUS_TOOLS_DIR/pmccabe
sudo cp $REDLOCUS_GEARS_DIR/tools/C/comments_tool.py $REDLOCUS_TOOLS_DIR/comments_tool.py
sudo cp -R $REDLOCUS_GEARS_DIR/tools/C/pmd-bin-5.0.5 $REDLOCUS_TOOLS_DIR/pmd-bin-5.0.5
sudo mkdir -p $REDLOCUS_TOOLS_DIR/lcov
sudo cp $REDLOCUS_GEARS_DIR/tools/C/lcov/geninfo $REDLOCUS_TOOLS_DIR/lcov/geninfo
sudo cp $REDLOCUS_GEARS_DIR/tools/C/lcov/genhtml $REDLOCUS_TOOLS_DIR/lcov/genhtml
sudo cp -R $REDLOCUS_GEARS_DIR/tools/C/clang/llvm $REDLOCUS_TOOLS_DIR/llvm

sudo rm -rf $REDLOCUS_PARSERS_DIR
sudo mkdir -p $REDLOCUS_PARSERS_DIR

sudo cp $REDLOCUS_GEARS_DIR/tools/parsers/mcc_parser.py $REDLOCUS_PARSERS_DIR/mcc_parser.py
sudo cp $REDLOCUS_GEARS_DIR/tools/parsers/cpd_parser.py $REDLOCUS_PARSERS_DIR/cpd_parser.py
sudo cp $REDLOCUS_GEARS_DIR/tools/parsers/lcov_parser.py $REDLOCUS_PARSERS_DIR/lcov_parser.py
sudo cp $REDLOCUS_GEARS_DIR/tools/parsers/clang_parser.py $REDLOCUS_PARSERS_DIR/clang_parser.py
