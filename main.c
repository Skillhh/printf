#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
		int i;
		i = 10;
		_printf("%d", i);

/*	    int len = 0;
        int len2 = 0;*/
        int alen = 0;
        int elen = 0; 
/*        char c = 'c';*/
    /*    char *str = "Hello, World";*/
/*        int p = 237482;
        int n = -328472;
        int z = 0;*/
/*        unsigned int uelen = 0;
        unsigned int ualen = 0;
        unsigned int m = 113342421;*/
/*
        printf("Expected   : %%%c\n", 'a');
        _printf("Actual     : %%%c\n", 'a');
        _printf(NULL);
         printf(NULL);
         _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
         len = _printf("Hola %c", '\0');
        len2 = printf("Hola %c", '\0');
        printf("comparacion string porcentaje con nulo %d - %d\n", len, len2);
        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]%s\n", "I am a string !", "holla");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Actual  [%%%%]");
        len2 = printf("Expected[%%%%]");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        alen = elen = 0;
        printf("=====================\n");
        printf("*****PERCENT*****\n");
        printf("=====================\n");
        elen = printf("Expected   : %%\n");
        alen = _printf("Actual     : %%\n");
        printf("Expected   : %i\n", alen);
        _printf("Actual     : %i\n", elen);
        elen = printf("%%%%");
        alen = _printf("%%%%");
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   :");
        len = printf("%");
        printf("\n");
        printf("Actual     :");
        len2 = _printf("%");
        printf("comparacion solo porcentaje %d - %d ", len, len2);
        printf("\n");
        len = _printf("");
        printf("impresion printf:\n");
        len2 = printf("");
        printf("comparacion solo comillas %d - %d\n", len, len2);
        len = _printf(NULL);
        printf("impresion printf:\n");
        len2 = printf(NULL);
        printf("\ncomparacion  null %d - %d\n", len, len2);
        len = _printf("%ñ");
        printf("impresion printf:\n");
        len2 = printf("%ñ");
        printf("\ncomparacion porcentajeotracosa %d - %d\n", len, len2);

        len = _printf("Hola %c", '\0');
        printf("impresion printf:\n");
        len2 = printf("Hola %c", '\0');
        printf("comparacion string porcentaje con nulo %d - %d\n", len, len2);

        len = _printf("Hola %");
        printf("impresion printf:\n");
        len2 = printf("Hola %");
        printf("\ncomparacion string porcentaje con string %d - %d\n", len, len2);
        _printf(NULL);

        printf(NULL);
        _printf(NULL);
        printf("START OF TEST\n");


        printf("=====================\n");
        printf("*****CHAR*****\n");
        printf("=====================\n");
        printf("Expected   : %c\n", 'a');
        _printf("Actual     : %c\n", 'a');
        elen = printf("Expected   : %c\n", c);
        alen = _printf("Actual     : %c\n", c);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   : %cc\n", 'a');
        _printf("Actual     : %cc\n", 'a');
        printf("Expected   : %c\n", 53);
        _printf("Actual     : %c\n", 53);
        printf("Expected   : %c\n", '\0');
        _printf("Actual     : %c\n", '\0');
        printf("Expected   : %%%c\n", 'y');
        _printf("Actual     : %%%c\n", 'y');
        printf("=====================\n");
        printf("*****STRINGS*****\n");
        printf("=====================\n");

        alen = elen = 0;
        printf("Expected   : %s\n", "holberton");
        _printf("Actual     : %s\n", "holberton");
        printf("Expected   : %s$\n", "");
        _printf("Actual     : %s$\n", "");
        elen = printf("Expected   : %s\n", str);
        alen = _printf("Actual     : %s\n", str);
        printf("Expected   : %s$\n", NULL);
        _printf("Actual     : %s$\n", NULL);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   : %sschool\n", "holberton");
        _printf("Actual     : %sschool\n", "holberton");

        alen = elen = 0;
        printf("=====================\n");
        printf("*****PERCENT*****\n");
        printf("=====================\n");
        elen = printf("Expected   : %%\n");
        alen = _printf("Actual     : %%\n");
        printf("Expected   : %i\n", alen);
        _printf("Actual     : %i\n", elen);
        elen = printf("Expected   : %%%%\n");
        alen = _printf("Actual     : %%%%\n");
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   :");
        printf("%");
        printf("\n");
        printf("Actual     :");
        _printf("%");
        printf("\n");
*/
        printf("=====================\n");
        printf("*****INTEGER*****\n");
        printf("=====================\n");
        alen = elen = 0;

//        elen = printf("Expected   : %i\n", p);
//        alen = _printf("Actual     : %i\n", p);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
//        elen = printf("Expected   : %i\n", n);
//        alen = _printf("Actual     : %i\n", n);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
//        elen = printf("Expected   : %i\n", z);
//        alen = _printf("Actual     : %i\n", z);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   : %i\n", INT_MAX);
        _printf("Actual     : %i\n", INT_MAX);
        printf("Expected   : %i\n", INT_MIN);
        _printf("Actual     : %i\n", INT_MIN);

        printf("=====================\n");
        printf("*****DECIMAL*****\n");
        printf("=====================\n");
        alen = elen = 0;
/*        p = 1134001;
        n = -4567;
        z = 0;*/
//        elen = printf("Expected   : %d\n", p);
//        alen = _printf("Actual     : %d\n", p);
        printf("Expected   : %d\n", elen);
        _printf("Actual     : %d\n", alen);
//        elen = printf("Expected   : %d\n", n);
//        alen = _printf("Actual     : %d\n", n);
        printf("Expected   : %d\n", elen);
        _printf("Actual     : %d\n", alen);
//        elen = printf("Expected   : %i\n", z);
//        alen = _printf("Actual     : %i\n", z);
        printf("Expected   : %i\n", elen);
        _printf("Actual     : %i\n", alen);
        printf("Expected   : %d\n", INT_MAX);
        _printf("Actual     : %d\n", INT_MAX);
        printf("Expected   : %d\n", INT_MIN);
        _printf("Actual     : %d\n", INT_MIN);
/*
        printf("=====================\n");
        printf("*****UNSIGNED*****\n");
        printf("=====================\n");
        z = 0;
        elen = printf("Expected   : %u\n", m);
        alen = _printf("Actual     : %u\n", m);
        printf("Expected   : %u\n", elen);
        _printf("Actual     : %u\n", alen);
        uelen = printf("Expected   : %u\n", z);
        ualen = _printf("Actual     : %u\n", z);
        printf("Expected   : %u\n", uelen);
        _printf("Actual     : %u\n", ualen);
        printf("Expected   : %u\n", z);
        _printf("Actual     : %u\n", z);
        printf("Expected   : %u\n", -5);
        _printf("Actual     : %u\n", -5);
        printf("Expected   : %u\n", UINT_MAX);
        _printf("Actual     : %u\n", UINT_MAX);
        printf("Expected   : %u\n", INT_MAX);
        _printf("Actual     : %u\n", INT_MAX);
        printf("Expected   : %u\n", 1);
        _printf("Actual     : %u\n", 1);
        printf("Expected   : %u\n", INT_MIN);
        _printf("Actual     : %u\n", INT_MIN);
        printf("=====================\n");*/
/*
        printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");
        _printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");

*/
        return (0);
}
