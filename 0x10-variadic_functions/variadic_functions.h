#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - A new struct type defining a printer.
 * @type: Type of first argument type points to
 * @print: A function pointer to a function that prints
 * a data type corresponding to type
 */

typedef struct printer
{
	char *type;
	void (*print)(va_list arg);
} printer_t;

#endif

