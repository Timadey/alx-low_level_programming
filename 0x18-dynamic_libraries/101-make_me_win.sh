#!/bin/bash
wget -P /tmp/ https://raw.github.com/Timadey/alx-low_level_programming/master/0x18-dynamic_libraries/rand_overide/rand_overide.so
export LD_PRELOAD=/tmp/rand_overide.so
