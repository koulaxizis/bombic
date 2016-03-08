#!/bin/sh
# skriptik urceny pro tvoreni zaloh

#cd /home/berny/Projects/bombic

fileno=0

while [ -f backup/"$fileno".tar.bz2 ]; do
   fileno=$(($fileno+1)) 
done

tar -cjf backup/"$fileno".tar.bz2 src/*.cpp src/*.h ChangeLog TODO

