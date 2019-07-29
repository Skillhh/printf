#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* print_c - prints a char
* @c: char to print
*
* Return: always 1
*/
void print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
void print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	_puts(str);
}
