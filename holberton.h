#ifndef _HOLBERTON__H_
#define _HOLBERTON__H_

#include <stdarg.h>
/**
* struct print - structure for printing various types
* @t: type to print
* @f: function to print
*/
typedef struct print
{
	char *type;
	int (*func)(va_list);
} print_t;

int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_porcent(va_list p);
#endif  /* _HOLBERTON_H */
