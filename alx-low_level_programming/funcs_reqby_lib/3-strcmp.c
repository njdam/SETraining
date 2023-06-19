#include "main.h"

/**
 * _strcmp - a function that compare two strings;
 * @s1: as our first string;
 * @s2: as our second string;
 *
 * Return: value 0 if equal, return int < 0 if less otherwise int > 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
