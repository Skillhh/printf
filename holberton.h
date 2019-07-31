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
	int (*func)(va_list);
} print_t;

int _printf(const char *format, ...);

int _putchar(char c);
int _strlen(char *l);
int _puts(char *str);
int print_c(va_list c);
int print_s(va_list s);

#endif  /* _HOLBERTON_H */
