#!/bin/bash
wget -P ..  https://raw.githubusercontent.com/Robertpaschal/alx-low_level_programming/master/0x18-dynamic_libraries/libtests.so 
export LD_PRELOAD="$PWD/ ../libtets.so"
