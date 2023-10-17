#include "main.h"
#include <stdarg.h>

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
	int count = 0;

	switch (*format)
					{
						case 'C':
							count = _printcharac(argums);
							break;
						case 'S':
							count = _printstrin(argums);
							break;
						case '%':
						_putcharac('%');
						count++;
							break;
						default:
						_putcharac('%');
						_putcharac(*format);
						count = 2;
							break;
					}

					*compute += count;

					return (count);

}

