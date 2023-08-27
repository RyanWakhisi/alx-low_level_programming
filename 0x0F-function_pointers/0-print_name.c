#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -Function that  prints name
 * @name: name to be printed
 * @f: pointer to function that prints name
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}


