#include "main.h"

/**
  * print_str_rev - prints string in reverse
  * @str: string to prin
  * Return: no. of chars to be printed
  */

int print_str_rev(char *str)
{
	int count, rev;

	count = 0, rev = 0;

	while (str[rev])
		rev++;

	count = rev;

	rev--;

	while (rev >= 0)
	{
		_putchar(str[rev]);
		rev--;
	}
	return (count);
}
