#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>
	#include <unistd.h>
	#include <string.h>
	#include <limits.h>
	#include <stddef.h>
	#include <stdlib.h>
	#include <stdbool.h>

	/* Function prototypes */
	int _putchar(char c);
	void _puts_recursion(char *s);
	int _strlen_recursion(char *s);
	int factorial(int n);
	int _pow_recursion(int x, int y);
	void _print_rev_recursion(char *s);
	bool is_pali(char *s, int start, int end);
	int is_palindrome(char *s);
	int is_prime_number(int n);
	bool check_prime(int n, int i);

#endif /* MAIN_H */
