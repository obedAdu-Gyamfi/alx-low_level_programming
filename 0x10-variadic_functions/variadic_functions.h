#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#define END_OF_LIST NULL
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
int _putchar(char c);
void print_all(const char * const format, ...);

#endif
