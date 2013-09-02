#!/bin/bash

#
# This script removes tools from /opt/redlocus/tools directory
#                     parsers from /opt/redlocus/parsers directory
#

REDLOCUS_TOOLS_DIR=/opt/redlocus/tools
REDLOCUS_PARSERS_DIR=/opt/redlocus/parsers

sudo rm -rf $REDLOCUS_TOOLS_DIR
sudo rm -rf $REDLOCUS_PARSERS_DIR
