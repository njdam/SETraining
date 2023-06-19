#include "main.h"
/**
 * _abs - to compute absolute value of an integer
 * @x: as our integer to be computed
 * if: as our function for comparison
 * _putchar: as our function to prints
 *
 * Return: to an intiger x for success to end program.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = (x * -1);
	}
	else
	{
		x = x;
	}
	return (x);
}
