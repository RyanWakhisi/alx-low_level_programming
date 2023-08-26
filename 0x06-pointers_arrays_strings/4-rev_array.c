#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements of an array to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = n-1; i >= n / 2; i--)
	{
		t = a[n - 1 - i ] ;
		a[i - 1 - i] = a[i];
		a[i] = t;
	}
}
