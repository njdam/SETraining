#include "main.h"

/**
 * *_strcpy - our function that copies the pointed string
 * @dest: as our string to be returned
 * @src: as our string to be copied
 *
 * Return: value is the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	for (x = 0; *(src + x) != '\0';)
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}
