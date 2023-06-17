#include <stdlib.h>
#include <stdio.h>

static unsigned long next = 1;

/* RAND_MAX assumed to be 32767 */
int myrand(void)
{
	next = next * 1103515245 + 12345;
	return((unsigned)(next/65536) % 32768);
}

void mysrand(unsigned int seed)
{
	next = seed;
}

int main(int argc, char *argv[])
{
	int j, r, nloops;
	unsigned int seed;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <seed> <nloops>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	seed = atoi(argv[1]);
	nloops = atoi(argv[2]);

	srand(seed);
	for (j = 0; j < nloops; j++)
	{
		r =  rand();
		printf("%d\n", r);
	}

	exit(EXIT_SUCCESS);
}
