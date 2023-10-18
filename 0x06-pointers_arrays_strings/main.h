#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>
	#include <unistd.h>
	#include <string.h>

	/* Function prototypes */
	int _putchar(char c);
	void reverse_array(int *a, int n);
	char *_strcat(char *dest, char *src);
	char *_strncat(char *dest, char *src, int n);
	char *string_toupper(char *);
	char *cap_string(char *);
	int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
