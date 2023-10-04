#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ranlib liball.a
ar -rc liball.a *.o
