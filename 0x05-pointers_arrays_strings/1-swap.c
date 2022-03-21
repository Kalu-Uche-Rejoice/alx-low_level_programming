#include "main.h"
/**
 * swap_int - A function to swap the values of two integers
 * Description: exchanges the values at the adresses found in the pointers
 * @a: pointer argument one
 * @b: pointer argument two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
