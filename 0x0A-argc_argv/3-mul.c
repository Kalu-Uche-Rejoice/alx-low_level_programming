#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * Description: program execution starts here
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 or zero
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
