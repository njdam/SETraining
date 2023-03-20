#include <stdio.h>
/**
 * main - function to start
 * putchar: to prints our numbers
 *
 * Return: always to value 0 to stop
 */
int main(void)
{
	int x = 0;
	int y;
	int a;
	int b;
	int c;
	int d;

	while (x < 100)
	{
		a = ((x / 10) + 48);
		b = ((x % 10) + 48);
		y = 1;
		while (y < 100)
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
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
