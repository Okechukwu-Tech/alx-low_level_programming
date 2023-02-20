#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random number and states whwther
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("n is positive\n");
	else if (n == 0)
		printf("n is zero\n");
	else
		printf("n is negative\n");
	return (0);
}
