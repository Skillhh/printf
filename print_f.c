#include "holberton.h"
/**
 * _printf - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int _printf(const char *format, ...)
{
	print_t p[] = { {"c", print_c}, {"s", print_s},{NULL, NULL} };
	va_list valist;
	int i, j, len = 0;

	if (format != NULL)
	{
		va_start(valist, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%' && format[i + 1] != '%')
			{
				for (j = 0; p[j].type; j++)
				{
					if (p[j].type[0] == format[i + 1])
					{
						len += p[j].func(valist);
						i = i + 1;
					}
				}
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				len += _putchar(format[i]);
				i++; }
			else
				len += _putchar(format[i]);
		}
	}
	else
	{
		return (-1);
	}
	va_end(valist);
	return (len);
}
