#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
