#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - computes calc
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int a1, a2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][1] == '/' || argv[2][1] == '%') && argv[3][0] == '0')
	{
		printf("Error");
		exit(100);
	}

	printf("%d\n", f(a1, a2));

	return (0);
}
