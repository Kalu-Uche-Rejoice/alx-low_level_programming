#include <stdio.h>
/**
 * main - program starts at main
 * this program prints the size of the different data types for each
 * Return: Function returns zero
 */
int main(void)
{
	long long a;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
