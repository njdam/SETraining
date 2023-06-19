#include "main.h"

/**
 * *_strpbrk - a function that searches a string for a set of bytes;
 * @s: our string to be searched;
 * @accept: bytes that matches to s tring to be printed;
 *
 * Return: strind "s" matched to accept otherwise "\0".
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		x = 0;
		while (accept[x])
		{
			if (*s == accept[x])
				return (s);
			x++;
		}
		s++;
	}
	return ('\0');
}
