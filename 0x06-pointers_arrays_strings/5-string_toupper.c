#include "main.h"
/**
 * string_toupper - converts lowercase alphabets to upper
 * case
 * Description: uses conditionals and a while loop
 * @a: string for conversion
 * Return: char a
 */
char *string_toupper(char *a)
{
	int i = 0;
	
	while (i >= 0)
	{
		if ( a[i] <= 122 && a[i] >= 97)
		{
			a[i] = a[i] - 32;
		}
		if (a[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (a);
}
