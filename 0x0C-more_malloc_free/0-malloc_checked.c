#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @x: size of space to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int x)
{
	void *ptr = malloc(x);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
