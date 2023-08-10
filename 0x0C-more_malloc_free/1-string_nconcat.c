#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @str1: first string to copy
 * @str2: second string to copy
 * @n: number of bytes of str2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (str1 == NULL)
		i = 0;
	else
	{
		for (i = 0; str1[i]; i++)
			;
	}
	if (str2 == NULL)
		j = 0;
	else
	{
		for (j = 0; str2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = str1[k];
	for (k = 0; k < j; k++)
		s[k + i] = str2[k];
	s[i + j] = '\0';
	return (s);
}
