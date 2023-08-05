#include "main.h"
/**
 * _strlen - returns the string length
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
