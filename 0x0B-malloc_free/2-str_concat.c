#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j = i + j;
	concat = malloc(sizeof(char) * i);
	if (concat == NULL)
	{
		return (NULL);
	}
	while (count < i)
	{
		*(concat + count) = *(s1 + count);
		count++;
	}
	while (count < j)
	{
		*(concat + count) = *(s2 + count);
		count++;
	}
	return (concat);
}
