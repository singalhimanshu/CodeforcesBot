#!/bin/sh
cd ~/cp/contests &&
mkdir $1 && cd $1 &&
xargs -n 1 cp -v ../../template.cpp<<<"./A.cpp ./B.cpp ./C.cpp ./D.cpp ./E.cpp" &&
nvim A.cpp
