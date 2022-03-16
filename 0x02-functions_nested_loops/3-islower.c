#include <stdio.h>
/**
 * islower - function to detect case of ASCII letter
 * Description: uses conditional statements
 * Return: integer
 */
int _islower(int c)
{
	if ((c >= 97) & (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - calls islower
 * Description: executes other functions
 * Return: 0
 */
int main(void)
{
	int n = _islower('H');
	printf("%d\n",n);
	return (0);
}
