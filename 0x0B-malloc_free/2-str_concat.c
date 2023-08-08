#include "main.h"
#include <stdlib.h>
/**
 * str_concat - gets end of input and add together
 * @s1: input 1
 * @s2: input 2
 * Return: concatinated string of the inputs
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ran;

	if (s1 == NULL)
		s1 = "";

	i = ran = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ran] != '\0')
		ran++;
	conct = malloc(sizeof(char) * (i + ran + 1));

	if (conct == NULL)
		return (NULL);
	i = ran = 0;
	while (s2[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ran] != '\0')
	{
		conct[i] = s2[ci];
		i++, ran++;
	}
	conct[i] = '\0';
	return (conct);
}
