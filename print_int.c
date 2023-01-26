#include "main.h"

/**
* print_int - will print an integer
*
* @i: the integer
* Return: size
*/

int print_int(va_list i)
{
	int a, b, digit, exponent, length, total_digits = 0, number;

	b = va_arg(i, int);
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
