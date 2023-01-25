#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_string - as is
 * @s: string
 *
 * Return: 1(Succ).
 */

int print_string(va_list s)
{
	char *str;
	int  i = 0;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
