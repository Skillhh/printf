#include "holberton.h"

/**
 * main - entry point
 * Return:  Always 0 (Success)
 */

int main(void)
{
	char a = 'l';
	char *ptr = "Holberton";

	_printf("Hola");
	_printf("%c", a);
	_printf("%s", ptr);
	_printf("%%");
	_printf(NULL);
	return (0);
}
