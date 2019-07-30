#include "holberton.h"
/**
 * _printf - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int _printf(const char *format, ...)
{
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list valist;
	int i, j, len;

	if (format != NULL)
	{
		va_start(valist, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%' && format[i + 1] != '%')
			{
				for (j = 0; j < 2; j++)
				{
					if (p[j].type[0] == format[i + 1])
					{	
						p[j].func(valist);
						i = i + 2;
					}
				}
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar(format[i]);
			}
			else
			{
				_putchar(format[i]);
			}
		}
	}
	else
	{
		return (-1);
	}
	len = i;
	va_end(valist);
	return (len);
}
