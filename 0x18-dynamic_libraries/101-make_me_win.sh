#!/bin/bash
wget -p .. https://github.com/fidelismarkcen/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
