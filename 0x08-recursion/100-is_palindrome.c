#include "main.h"

/**
 * is_palindrome - Confirms that a string is palindrome or not
 * @s: String to use
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = (int) strlen(s);
	int start = 0;
	int end = len - 1;
	bool ispalindrome;

	ispalindrome = is_pali(s, start, end);

	if (ispalindrome)
		return (1);
	else
		return (0);
}

/**
 * is_pali - Boolean function that checks if a string is a palindrome or not
 * @s: String to check
 * @start: First character of s
 * @end: Last character of s
 *
 * Return: True if s is palindrome, otherwise false
 */
bool is_pali(char *s, int start, int end)
{
	if (start == end)
		return (true);
	if (s[start] != s[end])
		return (false);
	if (start < end + 1)
		return (is_pali(s, start + 1, end - 1));
	return (true);
}
