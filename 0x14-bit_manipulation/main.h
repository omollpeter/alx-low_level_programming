#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>

/* Function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int calc_pow(int base, int power);
int _putchar(char c);
unsigned long int calc_power(unsigned long int base, unsigned long int power);
unsigned long int binary_to_uintl(const char *b);
char *create_bin(unsigned long int n);

#endif /* MAIN_H */
