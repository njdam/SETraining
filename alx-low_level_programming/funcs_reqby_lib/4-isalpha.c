#include "main.h"
/**
 * _isalpha - to check for alphabert
 * @c: as our character to be checked
 * if: as our function for comparison
 *
 * Return: to 1 if @c is a letter otherwise return to value 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
