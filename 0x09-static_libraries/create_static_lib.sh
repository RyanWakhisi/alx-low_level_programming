#!/bin/bash
gcc -c  -Wall -Werror -Wextra -std=gnu89 *.c
ar -r  liball.a *.o
ranlib liball.a
