#include "main.h"

/**
 * argstostr - Concatenates all the program parameters
 * @ac: Arguments count
 * @av: Arguments vector
 *
 * Return: pointer to string containing the arguments, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i;
	unsigned int size = 0;

	if (!(ac || av))
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	args = malloc(size + ac + 1);

	for (i = 0; i < ac; i++)
	{
		if (i == 0)
		{
			strcpy(args, av[i]);
			strcat(args, "\n");
		}
		if (i > 0)
		{
			strcat(args, av[i]);
			strcat(args, "\n");
		}
	}

	return (args);
}
