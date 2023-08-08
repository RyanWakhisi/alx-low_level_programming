#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ryan;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ryan = malloc(sizeof(char) * (i + 1));

	if (ryan == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ryan[r] = str[r];

	return (ryan);
}
