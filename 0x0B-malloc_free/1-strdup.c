#include <stdlib.h>
#include "main.h"
/**
 * _strdup - reurns a pointer to a newly allocated
 * space in memory
 * @str: pointer to string
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char newString;
	int count = 0;
	int i = 0;
	
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count ++;
	}
	newString = malloc(sizeof(char) * count);
	if (newString == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		*(newString + i) == *(str + i);
		if (*(str + i) == '\0')
		{
			break;
		}
	}
