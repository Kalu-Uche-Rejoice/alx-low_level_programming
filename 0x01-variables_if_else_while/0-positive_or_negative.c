#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program generates random numbers and checks
 * if they are negative or positive
 * main - The program starts here
 * the main function is performs the actions for the program
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
