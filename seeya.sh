#! /bin/bash

git add .
git commit -m "small update"
git push
git push github master
sleep 2
clear
tree
sleep 2
clear
cowsay -f eyes "you fat bastard, get outta here ;) " 
