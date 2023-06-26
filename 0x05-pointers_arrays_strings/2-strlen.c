#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}


