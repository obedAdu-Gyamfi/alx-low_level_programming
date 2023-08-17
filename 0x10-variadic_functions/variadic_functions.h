#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#define END_OF_LIST NULL
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
int _putchar(char c);
void print_all(const char * const format, ...);

/**
 * struct point - short description
 * @i: i
 * @s: s
 * @c: c
 * @f: f
 */
typedef struct point
{
	int i;
	char *s;
	char c;
	float f;
} type_arg;
#endif
