#ifndef LINKED_LIST
#define LINKED_LIST
/**
 * struct list_s - a struct type.
 * @str: str
 * @len: len
 * @next: next node.
 *
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
