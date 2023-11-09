#include "3-calc.h"

/**
 * get_op_func - Searches for the correct operation function depending on
 *				the operator provided
 * @s: The operator supplied in the command line
 *
 * Return: pointer to the required operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i].op != NULL && ops[i].f != NULL) || strlen(s) > 1)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
