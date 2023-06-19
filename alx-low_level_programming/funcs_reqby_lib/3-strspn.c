#include "main.h"

/**
 * _strspn - a function that gets length of substring prefix;
 * @s: our string to be used;
 * @accept: bytes consisted in s;
 *
 * Return: number of (accept) bytes in initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		y = 0;
		while (accept[y])
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
			y++;
		}
		s++;
	}
	return (x);
}
