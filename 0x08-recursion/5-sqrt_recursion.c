#include "main.h"
/**
 * find_root - finds the root
 * @sqrt: the squareroot
 * @n: number to use
 *
 * Return: root
 */

int find_root(int sqrt, int n);

int find_root(int sqrt, int n)
{
	if (sqrt * sqrt > n)
		return (-1);
	else if (sqrt * sqrt  == n)
		return (sqrt);
	else
		return (find_root(sqrt + 1, n));
}

/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: the number to compute its sqrt
 *
 * Return: The sqrt of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(0, n));
}

