#! /bin/bash

git add .
git commit -m "small update"
git push
git push github master
sleep 0.5
clear
tree
sleep 0.5
clear
cowsay -f eyes "you fat bastard, get outta here ;) " 
