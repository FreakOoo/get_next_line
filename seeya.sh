#! /bin/bash

git add .
git commit -m "small update"
git push
git push github master
sleep 2 
clear
tree
git status
sleep 5
clear
cowsay -f eyes "all done \n you fat bastard, get outta here ;) " 
