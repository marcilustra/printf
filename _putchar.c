#include <unistd.h>
#define TEN24 1024

/**
 * _putchar - prints chars (Standard Output)
 * @c: char to print
 * Return: chars(Succ).
 */

int _putchar(char c)
{
	int counter;
	char buffer[TEN24];

	if (c == -1)
	{
		counter = 0;
		return (0);
	}
	if (c == -2 || counter == TEN24)
	{
		write(1, buffer, counter);
		counter = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[counter] = c;
		counter++;
		return (1);
	}
	return (0);
}

