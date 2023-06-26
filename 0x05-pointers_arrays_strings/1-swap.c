#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer to swap
 * @b: second integer to swap
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
