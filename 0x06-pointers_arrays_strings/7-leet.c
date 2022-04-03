#include "main.h"
/**
 * leet - replaces characters in string with numbers
 * Description: uses conditional, arrays, an while loops
 * @a: string
 * Return: a
 */
char *leet(char *a)
{
	char ascii[5] = {'4', '3', '0', '7', '1'};
	int cap[5] = {65, 69, 79, 84, 76};
	int small[5] = {97, 101, 111, 116, 108};
	int i = 0, j;
	
	while (*(a + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(a + i) == cap[j] || *(a + i) == small[j])
			{
				*(a + i) = ascii[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
