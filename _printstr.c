#include "main.h"
#include <stdarg.h>

/**
 * _printstr - Prints a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int _printstr(char *str)
{
	int count = 0;

	while (*str)
	{
		_putcharac(*str);
		str++;
		count++;
	}
	return (count);
}
