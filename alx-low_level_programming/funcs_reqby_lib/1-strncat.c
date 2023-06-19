#include "main.h"

/**
 * _strncat - a function that concentrate two strings by n strlen of src;
 * @dest: as our destination string to be used;
 * @src: as our source string to be used;
 * @n: as any length of memory of @src;
 * Return: to resulting srting "dest".
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int dl = 0;

	for (x = 0; dest[x] != '\0'; x++)
		dl++;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[dl + x] = src[x];
	dest[dl + x] = '\0';
	return (dest);
}
