#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _putspecifier - Process format specifiers.
 * @format: The format specifier character.
 * @argums: A va_list of arguments.
 *
 * Return: The number of characters printed for the specifier.
 */
int _putspecifier(const char *format, va_list argums)
{
	switch (*format)
	{
		case 'c':
		{
			char c = va_arg(argums, int);

			putchar(c);
			return (1);
		}
		case 's':
		{
			char *s = va_arg(argums, char*);
			int len = 0;

			while (*s)
			{
				putchar(*s);
				s++;
				len++;
			}
			return (len);
		}
		case '%':
		{
			putchar('%');
			return (1);
		}
		default:
			return (0);
	}
}

