#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwiae
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
