#include "main.h"

/**
 * _strlen - it returns the length of string.
 * @s: as our string
 *
 * Return: to value x to stop.
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x = x + 1;
	}
	return (x);
}
