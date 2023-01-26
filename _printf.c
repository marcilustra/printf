#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  * format_select - format selector for _printf
  * @format: format (char, string, int, decimal)
  * Return: specified format(Succ) / NULL(still Succ) ;
  */
int (*format_select(const char *format))(va_list)
{
	unsigned int i = 0;
	_format _f[] = {
		("c", print_char),
		("s", print_string),
		("d", print_decimal),
		("i", print_int),
		(NULL, NULL)
	};

	while (_f[i].c)
	{
		if (_f[i].c[0] == (*format))
			return (_f[i].f);
		i++;
	}
	return (NULL);
}

/**
  * _printf - print string as per specified format (see format_selector).
  * @format: format (i, c, s)
  * Return: output size(Succ)
  */
int _printf(const char *format, ...)
{

	unsigned int _charout = 0;
	unsigned int i = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			_charout++;
			i++;
		}
		if (format[i] == '\0')
			return (_charout);
		f = format_select(&format[i + 1]);
		if (f != NULL)
		{
			_charout += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		_charout++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (_charout);
}
