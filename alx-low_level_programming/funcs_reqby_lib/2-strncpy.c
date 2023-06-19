#include "main.h"

/**
 * _strncpy - a function that copies a string by n length;
 * @dest: as our destination;
 * @src: as our source string;
 * @n: as our target length of string to be copied;
 *
 * Return: to resulting string "dest".
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
