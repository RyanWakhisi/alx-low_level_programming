#include "main.h"

/**
 * swap two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
