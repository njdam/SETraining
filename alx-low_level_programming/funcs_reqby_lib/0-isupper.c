#include "main.h"
/**
 * _isupper - to check for uppercase character
 * @c: our character to be checked
 *
 * Return: to value 1 if c is uppercase otherwise to value 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
