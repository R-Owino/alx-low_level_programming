#!/bin/bash
echo "Enter file name:"
read FILENAME
FILEPATH="$(find ~/ -name $FILENAME | head -n 1)"
echo "copying from: path:" 
echo  $FILEPATH
cp -i $FILEPATH ~/alx-low_level_programming/0x18-dynamic_libraries
