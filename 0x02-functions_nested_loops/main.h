/**
 * _putchar - writes character to stdout
 * Description: one character at a time
 * Return: on success 0
 */
int _putchar(char c);

/**
 * print_alphabet - print alphabet in lower case
 * Description: uses _putchar
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 * Description: uses _putchar and nested while loops
 * Return: void
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if letter is lowercase
 * Description: uses conditional if
 * Return: 1 for true, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha -checks if argument is an alphabet
 * Description: uses conditional if
 * @c: argument to be checked
 * Return: 1 for true, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - checks sign of argument
 * Description: uses conditional if
 * @n: conditional argument
 * Return: 1 for positive 0 for negative -1 for negative
 */
int print_sign(int n);

/**
 * _abs - computes absolute value
 * Description: uses conditional if
 * Retuns absolute value of argument
 */
int _abs(int);

/**
 * print_last_digit - copmutes last digit of a number
 * Description: uses modulus of base 10
 * @n: agrument that contains digit
 * @x: value to be returned ie. last digit
 * Return: x
 */
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add (int a, int b);
void print_to_98(int n);
