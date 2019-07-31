#include "holberton.h"

int print_d(va_list d)
{
	int n = (va_arg(d, int));
	int i = 0, j = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	while (i > 0)
	{
		i /= 10;
		j *= 10;
	}
	j /= 10;
	while (j > 0)
	{
		_putchar(((n / j) % 10) + 48);
		j /= 10;
	}
}
