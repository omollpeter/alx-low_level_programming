#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>
	#include <unistd.h>
	#include <string.h>
	#include <limits.h>
	#include <stddef.h>

	/* Function prototypes */
	int _putchar(char c);
	void simple_print_buffer(char *buffer, unsigned int size);
	char *_memset(char *s, char b, unsigned int n);
	char *_memcpy(char *dest, char *src, unsigned int n);
	char *_strchr(char *s, char c);
	void print_chessboard(char (*a)[8]);
	unsigned int _strspn(char *s, char *accept);
	void set_string(char **s, char *to);
	void print_diagsums(int *a, int size);
	char *_strstr(char *haystack, char *needle);
	char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */
