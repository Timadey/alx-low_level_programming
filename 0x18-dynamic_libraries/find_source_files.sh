#!/bin/bash
while read file_name; do
	find ../ -type f -name "$file_name" -exec cp {} ./libsourcefiles \;
	echo "man";
done <source_file_list
