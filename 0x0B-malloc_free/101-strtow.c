#include "main.h"

/**
 * strtow - Splits string into words
 * @str: String to split
 *
 * Return: pointer to array containing words from string, NULL otherwise
 */
char **strtow(char *str)
{
	char *str_copy, *token, **str_tokens;
	unsigned int len, wc;
	int i = 0, j;

	if (!str)
		return (NULL);

	len = strlen(str);
	str_copy = malloc(len + 1);
	if (!str_copy)
		return (NULL);
	strcpy(str_copy, str);

	wc = wordcount(str_copy);
	str_tokens = malloc((wc + 1) * sizeof(char *));

	token = strtok(str_copy, " \t");
	if (token == NULL)
		str_tokens = NULL;
	while (token != NULL)
	{
		str_tokens[i] = malloc(strlen(token) + 1);
		if (!str_tokens[i])
		{
			if (i == 0)
				free(str_tokens);
			if (i > 0)
			{
				for (j = i; j >= 0; j--)
					free(str_tokens[i]);
				free(str_tokens);
			}
		}
		strcpy(str_tokens[i], token);
		token = strtok(NULL, " \t");
		i++;
	}
	str_tokens[i] = NULL;

	return (str_tokens);
}

/**
 * wordcount - Counts the words in a string
 * @str: String whose words are counted
 *
 * Return: Number of words from the string
 */
unsigned int wordcount(char *str)
{
	char *str_copy, *token;
	unsigned int len, wc = 0;

	len = strlen(str);
	str_copy = malloc(len + 1);
	if (!str_copy)
		exit(1);
	strcpy(str_copy, str);

	token = strtok(str_copy, " \t");
	while (token != NULL)
	{
		wc++;
		token = strtok(NULL, " \t");
	}

	return (wc);
}
