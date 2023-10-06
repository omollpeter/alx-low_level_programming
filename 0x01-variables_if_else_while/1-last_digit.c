#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Program generates a random number, extracts its last digit,
 * check and prints whether it is -gt 5, eq 0 or -lt and -ne 6
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	printf("The last digit of %d is %d ", n, l_digit);

	if (l_digit > 5)
		printf("and is greater than 5\n");
	else if (l_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
