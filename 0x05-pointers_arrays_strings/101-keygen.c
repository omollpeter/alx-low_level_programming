#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password for 101-crackme
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int password[100];
	int i;
	int sum = 0;
	int n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
