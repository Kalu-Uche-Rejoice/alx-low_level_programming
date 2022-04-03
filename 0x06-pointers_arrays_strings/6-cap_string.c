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
	int i, j = 0, c;

	while (*(a + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(a + 0) >= 97 && (*(a + 0) <= 122))
			{
				*(a + 0) = *(a + 0) - 32;
			}	
			if (*(a + j) == ascii[i])
			{
				c = j + 1;
				if (*(a + c) >= 97 && (*(a + c) <= 122))
				{
					*(a + (j + 1)) = *(a + (j + 1)) - 32;
				}
			}
		}
		j++;
	}
	return (a);
}


