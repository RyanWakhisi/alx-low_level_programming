#!/bin/bash
gcc -c -std=gnu89 -Werror -wall -Wextra *.c
ar -r  liball.a *.o
ranlib liball.a
