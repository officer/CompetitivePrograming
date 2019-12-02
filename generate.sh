#!/bin/bash
echo 'Please input contest name: '
read name

cp -rp /Users/kasaiso/Desktop/Hobby/CompetitivePrograming/.template/ ./$name/
for i in b c d e f; do
    cp -p ./$name/a.py ./$name/$i.py
    cp -p ./$name/test/input_a.dat ./$name/test/input_$i.dat
    cp -p ./$name/test/test_a.py ./$name/test/test_$i.py
done