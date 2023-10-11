#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - Checks if a charcter is a letter
 * @c: Character to check
 *
 * Return: 1 if lowercase, uppercase or letter
 * If not 0 is returned
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
