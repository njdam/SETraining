#include "main.h"

/**
 * _atoi - a function to convert a string to an integer
 * @s: our string to be converted
 *
 * Return: a number in string otherwise to 0, if no number in string.
 */
int _atoi(char *s)
{
	int a, b;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	for (a = 0; s[a] != '\0';)
	{
		a++;
	}
	for (b = 0; (b < a) && (c == 0); b++)
	{
		if (s[b] == '-')
		{
			d++;
		}
		else if (s[b] >= 48 && s[b] <= 57)
		{
			e = s[b] - 48;
			if (d % 2)
			{
				e = -e;
			}
			f = f * 10 + e;
			c = 1;
			if (s[b + 1] < 48 || s[b + 1] > 57)
			{
				break;
			}
			c = 0;
		}
	}
	if (c == 0)
	{
		return (0);
	}
	return (f);
}
