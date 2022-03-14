#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program starts here
 * Description: the main function generates random numbers and checks them
 * if their last numbers are greater than 5 or less than 6 but not zero or
 * zero
 * Return: zero
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c= n%10;
	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,c);
	}
	else if (0 < c && c < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,c);
	}
	return (0);
}
