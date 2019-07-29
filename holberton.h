#ifndef _HOLBERTON__H_
#define _HOLBERTON__H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
* struct print - structure for printing various types
* @type: type to print
* @func: function to print
*/
typedef struct print
{
	char *type;
	void (*func)(va_list);
} print_t;

int _printf(const char *format, ...);

int _putchar(char c);
int _strlen(char *l);
void _puts(char *str);
void print_c(va_list c);
void print_s(va_list s);
void print_porcent(va_list);

#endif  /* _HOLBERTON_H */
