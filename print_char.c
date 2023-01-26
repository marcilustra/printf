#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - will print a single character
 * @c: character to print
 *
 * Return: 1 (Succ).
 */

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}

/**
 * print_percentage - prints %
 *
 * Return: 1(Succ).
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
