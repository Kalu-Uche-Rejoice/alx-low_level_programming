#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: size of argv array
 * @argv: array of pointers to arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if ((**(argv + i) >= 0  && **(argv + i) <= 9))
		{
			sum += atoi(*(argv + i));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

