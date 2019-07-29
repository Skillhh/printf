#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int _printf (const char *format,...)
{

	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list valist;
	int i = 0;
	int count = 0;

	va_star(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
	}
}
