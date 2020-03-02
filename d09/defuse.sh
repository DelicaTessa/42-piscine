#!/bin/sh

touch bomb.txt
time="$(stat -f "%a" bomb.txt | awk -F: '{print ($1 - 1)}')"

echo "$time"
