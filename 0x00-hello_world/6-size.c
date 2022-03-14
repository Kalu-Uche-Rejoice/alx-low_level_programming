#include <stdio.h>
/**
 * main - program starts at main
 * this program prints the size of the different data types for each
 * Return: Function returns zero
 */
int main(void)
{
	long long a;

	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
