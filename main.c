#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 * Return:  Always 0 (Success)
 */

int main(void)
{
	char a = 'l';
	char *ptr = "Holberton";
	char *str = NULL;
	char *t = "";

	//_printf("%j");
	
	_printf("Hola\n");
	printf("Hola\n");
	_printf("a = %c ptr = %s\n", a, ptr);
	printf("a = %c ptr = %s\n", a, ptr);
	_printf("ptr: %s", ptr);
	printf("ptr: %s", ptr);
	_printf("\nstr NULL\n");
	printf("\nstr NULL\n");
	_printf("%s", str);
	printf("%s", str);
	_printf("\nstr vacio\n");
	_printf("%s\n", t);
	printf("%s\n", t);
	_printf("%%");
	printf("%%");
	_printf("\n%%%% jhjhjhjhj");
	printf("\n%%%% jhjhjhjhj");
	_printf("\nHola %% con doble signo");
	printf("\nHola %% con doble signo");
	_printf("\nHola antes de NULL\n");
	printf("\nHola antes de NULL\n");
	_printf(NULL);
	printf(NULL);
	_printf("Despues del NULL\n");

	return (0);
}
