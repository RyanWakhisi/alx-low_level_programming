#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchart(*str);
	}
	_putchar('\n');
}
