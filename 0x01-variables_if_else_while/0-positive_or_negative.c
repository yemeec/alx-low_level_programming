#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
	printf("%d is zero\n", n);
}
else if( n < 0)
{
	printf("%d is negative\n", n);
}
else if (n > 0)
{
	printf("%d is positive\n", n);
}
	/* your code goes there */
	return (0);
}
