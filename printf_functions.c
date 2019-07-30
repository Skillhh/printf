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
	if (str != NULL)	
	{
		len	= _strlen(str);
		write(1, str, len);
	}
	else
	{
		str = "(null)";
		write(1,str,6);
	}
}
