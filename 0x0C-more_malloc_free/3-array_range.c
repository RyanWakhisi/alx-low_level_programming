#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @first: the first integer
 * @last: the last integer
 * Return: pointer of the array
 */
int *array_range(int first, int last)
{
	int i;

	int range;

	int *arr;

	if (first > last)
	{
		return (NULL);
	}
	range = (last - first) + 1;

	arr = (int *)malloc(sizeof(int) * range);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++, first++)
	{
		arr[i] = first;
	}
	return (arr);
}
