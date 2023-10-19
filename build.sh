#!/bin/bash

set -xe

mkdir -p bin
cp lib/SDL2.dll bin/SDL2.dll

gcc src/snake.c -o bin/snake.exe -Iinclude -Llib -lmingw32 -lSDL2main -lSDL2 -Wextra -Wall -pedantic