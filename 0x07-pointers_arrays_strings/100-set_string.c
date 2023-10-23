#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 * @s: String to set
 * @to: Character to set the string to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
