#include "main.h"
/**
 * _islower - as our function to check code and start a program
 * if: as our function used for comparison
 * @c: as our paramenter for intiger to check characters
 *
 * Return: to value 1 if c is lowercase otherwise return to 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
