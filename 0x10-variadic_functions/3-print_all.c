#include "variadic_functions.h"

/**
 * print_all - Prints any argument provided if it's format is present
 * @format: A string that contains format for the supplied arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, num, j;
	char ch, *str;
	float frac;
	va_list args;

	if (!format)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, format);
	while (format[i])
	{
		j = 0;
		switch (format[i])
		{
		case 'c':
			ch = va_arg(args, int);
			printf("%c", ch);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			frac = va_arg(args, double);
			printf("%f", frac);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			j = 1;
			break;
		}
		while (i < (int) strlen(format) - 1 && j == 0)
		{
			printf(", ");
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
