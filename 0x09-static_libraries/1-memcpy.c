#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: current memory where where it is stored
 * @src: destinstion memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory where n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
