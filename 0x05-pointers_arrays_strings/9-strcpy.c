#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string from src to dest
 * @dest: destinstion of the string
 * @src:source of the string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
