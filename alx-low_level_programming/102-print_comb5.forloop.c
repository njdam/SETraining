#include <stdio.h>
/**
 * main - to start
 * putchar: to prints
 *
 * Return: alyways to value 0
 */
int main(void)
{
	int x, y, a, b, c, d;

	for (x = 0; x < 100; x++)
	{
		a = ((x / 10) + 48);
		b = ((x % 10) + 48);
		for (y = 1; y < 100; y++)
		{
			c = ((y / 10) + 48);
			d = ((y % 10) + 48);
			if (x < y)
			{
				putchar(a);
				putchar(b);
				putchar(32);
				putchar(c);
				putchar(d);
				if (x != 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
