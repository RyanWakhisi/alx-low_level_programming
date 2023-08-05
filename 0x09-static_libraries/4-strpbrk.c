#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: input value
 * @acc: input value
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *acc)
{
	int p;

	while (*s)
	{
		for (p = 0; acc[p]; p++)
		{
			if (*s == acc[p])
				return (s);
		}
		s++;
	}
	return ('\0');
}

