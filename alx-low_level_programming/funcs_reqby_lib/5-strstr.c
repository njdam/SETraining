#include "main.h"

/**
 * *_strstr - a function that locate substring;
 * @haystack: our string where to fing substring "needle";
 * @needle: our substring to be located from "haystack" string;
 *
 * Return: a pointer to the beginning of substring "needle" otherwise "NULL".
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack)
	{
		if (*needle == 0)
			return (haystack);
		x = 0;
		while (haystack[x] == needle[x])
		{
			if (needle[x + 1] == '\0')
				return (haystack);
			x++;
		}
		haystack++;
	}
	return ('\0');
}
