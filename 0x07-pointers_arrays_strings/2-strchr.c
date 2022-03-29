#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * Description: uses coinditionals and a while loop
 * @s: string to be checked
 * @c: character to be found
 * Return: q
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	char *q;

	while ( count >= 0)
	{
		if (*(s + count) == c)
		{
			q = (s + count);
			break;
		}
		else if (*(s + count) == '\0')
		{
			q = NULL;
			break;
		}
		count++;
	}
	return (q);
}
