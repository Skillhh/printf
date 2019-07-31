#include "holberton.h"

/**
* print_c - prints a char
* @c: char to print
*Return: 1
*/
int print_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *Return: len
 */
int print_s(va_list s)
{
	int len;

	char *str = (va_arg(s, char *));

	if (str != NULL)
	{
		len	= _strlen(str);

		write(1, str, len);
	}
	else
	{
		str = "(null)";

		write(1, str, 6);
	}
	return (len);
}
/**
 *print_per - Print percent.
 *@p: integer
 *Return: integer
 */
int print_per(va_list p)
{
	(void) p;
	_putchar('%');
	return (1);
}
