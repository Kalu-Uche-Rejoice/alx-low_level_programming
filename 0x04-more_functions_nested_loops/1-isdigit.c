#include "main.h"
#include <stdio.h>
/** _isdigit - checks if a value is a digit
 * Description: usef for loops and conditionals
 * @c: value to be checked
 * Return: 1 if it is a digit and 0 otherwise
 */
int _isdigit(int c)
{

	if (c < 10 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
