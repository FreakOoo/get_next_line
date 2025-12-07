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
cowsay -f eyes "ALL DONE !!!
You fat bastard, get outta here ;) "
sleep 10
clear
cowsay -f eyes "wtf are you still doing here, GO !!!"
