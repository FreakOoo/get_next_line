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
cowsay -f eyes "ALL DONE !!! \nYou fat bastard, get outta here ;) "
sleep 5
clear
cowsay -f eyes "Come on go away..."
