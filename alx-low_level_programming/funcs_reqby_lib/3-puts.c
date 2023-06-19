#include "main.h"

/**
 * _puts - our function to prints a string
 * _putchar: our function to prints
 * @s: our string to be printed
 *
 * Return: type is void.
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
