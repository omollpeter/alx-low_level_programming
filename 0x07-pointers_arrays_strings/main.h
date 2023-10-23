#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>
	#include <unistd.h>
	#include <string.h>
	#include <limits.h>

	/* Function prototypes */
	int _putchar(char c);
	char *_memset(char *s, char b, unsigned int n);
	char *_memcpy(char *dest, char *src, unsigned int n);
	char *_strchr(char *s, char c);
	void print_chessboard(char (*a)[8]);

#endif /* MAIN_H */
