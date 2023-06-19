#include "main.h"
/**
 * _isdigit - to check if @c is a digit
 * @c: is our parameter to be checked if it is a digit
 *
 * Return: to value 1 if c is a digit otherwise to value 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
