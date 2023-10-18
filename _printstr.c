#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printstr - Print a null-terminated string.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _printstr(char *str)
{
	int count = 0;

	while (*str)
	{
		putchar(*str);
		str++;
		count++;
	}
	return (count);
}

