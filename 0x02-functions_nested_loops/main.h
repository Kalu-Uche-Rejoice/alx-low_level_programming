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
