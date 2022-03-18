#include <stdio.h>
/**
 * main - prints to screen fizz for multiples of 3,
 *  buzz for multiples of 5, fizz buzz for multiples
 *  of 5 and 3, otherwise it prints number. range: 1-100
 *  Description: uses while loop and conditional if statements
 *  Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d",i);
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i < 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
