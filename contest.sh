#!/bin/sh
cd ~/cp/contests &&
mkdir $1 && cd $1 &&
mkdir {A..E} &&
prefix=~/cp/scriptHelper
for i in {A..E}
do
    cp $prefix/test.cpp $prefix/output.txt $prefix/input.txt $prefix/Session.vim ~/cp/contests/$1/$i
done
