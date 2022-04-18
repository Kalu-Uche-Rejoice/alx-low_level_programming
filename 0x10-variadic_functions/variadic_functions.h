#ifndef VARIADIC
#define VARIADIC
/**
 * sum_them_all - function to sum a varying number of parameters
 * @n: tells nummber of parameters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...);
/**
 * print_numbers - function to print numbers then new line
 * @separator: string to separate numbers
 * @n: number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings - function to print strings then new line
 * @separator: separating string
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
