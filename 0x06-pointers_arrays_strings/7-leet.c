#include "main.h"
#include "string.h"

/**
 * leet - a function that encodes a string to 1337
 * @s: the string to be encoded
 *
 * Return: The address od s
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}

		i++;
	}
	return (S);
}
