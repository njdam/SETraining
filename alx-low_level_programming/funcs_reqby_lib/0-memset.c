#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte;
 * @s: our pointer pointing to character @b;
 * @b: our character to fill the memory of @s;
 * @n: is size of our array @s pointing to character @b;
 *
 * Return: a pointer to memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
