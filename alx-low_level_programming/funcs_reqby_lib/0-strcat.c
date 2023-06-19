#include "main.h"

/**
 * _strcat - ouf function tha concentrates two strings;
 * @src: as our source string;
 * @dest: as our destination string;
 *
 * Return: to resulting string "dest".
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int dl = 0;
	int sl = 0;

	for (x = 0; dest[x] != '\0'; x++)
		dl++;
	for (x = 0; src[x] != '\0'; x++)
		sl++;
	for (x = 0; x <= sl; x++)
		dest[dl + x] = src[x];
	return (dest);
}
