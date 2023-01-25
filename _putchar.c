#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a character (Standard Output)
 * @c: Char to print
 * Return: 1 (Succ
 * -1 (no Succ)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
