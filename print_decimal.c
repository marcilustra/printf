#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_decimal - will print fractional numbers
* in the form n.n... e.g 3.1415...
*
* @d: integer to format into a decimal
* Return: dec (Succ)
*/

int print_decimal(va_list d)
{
	int a, b, digit, exponent, length;
	unsigned int total_digits = 0;
	int number;

	b = va_arg(d, int);
	if (b != 0)
	{
		if (b < 0)
		{
			_putchar('-');
			total_digits++;
		}
		number = b;
		length = 0;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		exponent = 1;
		for (a = 1; a <= length - 1; a++)
			exponent *= 10;
		for (a = 1; a <= length; a++)
		{
			digit = b / exponent;
			if (b < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			total_digits++;
			b -= digit * exponent;
			exponent /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (total_digits);
}
