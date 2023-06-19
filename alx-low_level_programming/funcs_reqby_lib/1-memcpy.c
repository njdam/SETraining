#include "main.h"

/**
 * *_memcpy - a function that copies memory area;
 * @dest: our destination;
 * @src: our source area memory;
 * @n: is bytes of our memory area src;
 *
 * Return: a pointer to "dest".
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
