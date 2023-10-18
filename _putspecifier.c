#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _putspecifier - Process format specifiers.
 * @format: The format specifier character.
 * @argums: A va_list of arguments.
 * @compute: Pointer to the total character count.
 *
 * Return: The number of characters printed for the specifier.
 */
int _putspecifier(const char *format, va_list argums, int *compute)
{
	switch (*format)
	{
		case 'c':
			return (_printcharac(argums, compute));
		case 's':
			return (_putstring(argums, compute));
		case 'd':
		case 'i':
			return (_putintg(argums, compute));
		case '%':
			return (_putpercent(compute));
		default:
			return (0);
	}
}

