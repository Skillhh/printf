#include "holberton.h"

/**
* print_c - prints a char
* @c: char to print
*/
void print_c(va_list c)
{
	_putchar(va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 */
void print_s(va_list s)
{
	int len;

	char *str = (va_arg(s, char *));

	if (s != NULL)
	{
		len = _strlen(str);

		write(1, str, len);
		return;
	}
	write(1, "(nil)", 5);
}
/**
 * print_porcent - prints a special character '%'
 * @p: string to print
 */
void print_porcent(va_list p)
{
	if (p != NULL)
		_putchar('%');
	else
		_putchar(va_arg(p, int));
}

