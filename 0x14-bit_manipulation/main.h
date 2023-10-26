#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned long int _pow(unsigned int base, unsigned int power);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
