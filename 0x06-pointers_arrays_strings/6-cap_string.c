#include "main.h"
/**
 * cap_string - capitalizes all words
 * Description: uses array, conditional and while loop
 * @a: string to be capitalized
 * Return: char*
 */
char *cap_string(char *a)
{
	int ascii[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i, j = 0;

	while (*(a + j) != '\0')
	{
		if (*(a + j) >= 97 && *(a + j) <= 122)
		{
			*(a + j) = *(a + j) -32;
		}
	}
	while (*(a + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(a + j) == ascii[i])
			{
				*(a + (j + 1)) == *(a + (j + 1 )) -32;
				break;
			}
		}
		j++;
	}
	return (a);


