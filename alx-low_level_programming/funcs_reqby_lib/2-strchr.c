#include "main.h"

/**
 * *_strchr - our function that locates a character in a string;
 * @s: a pointer pointing to character;
 * @c: our pointed character;
 *
 * Return: to character "c" in string s, if not c found to "NULL".
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		x++;
	}
	return ('\0');
}
