#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: use to prints our #nt combination of 3 digits number
 *
 * Return: always to value 0 to stop a program
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (x != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
