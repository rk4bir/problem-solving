#!/bin/bash

read -p '' x
read -p '' y

if [ $x -lt $y ]; then
	echo 'X is less than Y'
elif [ $x -gt $y ]; then
	echo 'X is greater than Y'
else
	echo 'X is equal to Y'
fi

