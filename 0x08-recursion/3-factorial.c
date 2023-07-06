#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: the number to compute its factorial
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
