#ifndef LISTS
#define LISTS
# include <stddef.h>
/**struct list_s -singly linked lists
 * @str: string
 * @len: tell length of stringto be stored to malloc
 * @next: pointer to the next node
 *
 * Description- singly linked list practice
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;
int _putchar(char *c);
size_t print_list(const list_t *h);
#endif
