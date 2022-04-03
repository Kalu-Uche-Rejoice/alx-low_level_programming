#include "main.h"
/**
 * cap_string - capitalizes all words
 * Description: uses array, conditional and while loop
 * @a: string to be capitalized
 * Return: char*
 */
char *cap_string(char *a)
{
	int i, j = 0;
	int ascii[11] = {32, 33, 41, 44, 46, 34, 59, 40, 63, 123, 125};

	while (j >= 0)
	{
		for (i = 0; i < 11; i++)
		{
			if (a[j] == ascii[i])
			{
				a[j + 1] = a[j + 1] - 32;
			}
		}
		if (a[j] == '\0')
		{
			break;
		}
	}
	return a;
}
