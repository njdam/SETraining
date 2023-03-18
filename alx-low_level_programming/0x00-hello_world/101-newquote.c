#include <stdio.h>
#include <unistd.h>
/**
 * main - to start the program
 * write: our main function to prints
 *
 * Return: to value 0 to stop
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}

