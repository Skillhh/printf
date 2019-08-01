#include "holberton.h"
/**
 * _printf - checks if there is a valid format specifier
 * @format: possible format specifier
 * Return: pointer to valid function or NULL
 */
int _printf(const char *format, ...)
{
	print_t p[] = { {"c", print_c}, {"s", print_s}, {"d", print_di},
		{"i", print_di}, {NULL, NULL}
	};
	va_list valist;
	va_start(valist, format);
	int i = 0, j = 0, count = 0, len = 0, e = 0, c = 0;

	if (format == NULL)
		return (-1);
	for (i = 0;format != NULL && format[i] != 0; i++)
	{
		c = 0;
		if (format[i] == '%')
		{
			for (j = 0; p[j].type; j++)
			{
				if (format[i + 1] == 0)
					return (-1);
				if (p[j].type[0] == format[i + 1])
				{	
					count += p[j].func(valist);
					i += 1;
					e += 2;
					c = 2;
					break;
				}
			}
			if (c == 0)
			       _putchar(format[i]);
			i += 1;
		}
	}
	len = i - count - e;
	va_end(valist);
	return (len);
}
