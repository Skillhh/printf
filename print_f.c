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
		{"%", print_porcent},
		{NULL, NULL}
	};
	va_list valist;
	int i, j, length;

	if (format != NULL)
	{
		va_start(valist, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				for (j = 0; j < 3; j++)
				{
					if (p[j].type[0] == format[i + 1])
						p[j].func(valist);
				}
			}
			else
			{
				if (format[i - 1] != '%')
					_putchar(format[i]);
			}
		}
	}
	length = i;
	va_end(valist);
	return (length);
}
