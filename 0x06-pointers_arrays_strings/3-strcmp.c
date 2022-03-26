#include "main.h"
/**
 * _strcmp - compares two strings
 * Description: uses conditional and while loop
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int n = 0;

	while (count >= 0)
	{
		if (s1[count] == s2[count])
		{
			n++;
		}
		if (s1[count] == '\0')
		{
			break;
		}
		count++;
	}
	return (n);
}
