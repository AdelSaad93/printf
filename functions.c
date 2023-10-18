#include "main.h"

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
	char (specificer) = *format;

	switch (specificer)
	{
		case 'c':
			_printcharac(argums, compute);
			return (1);
		case 's':
			_putstring(argums, compute);
			return (1);
		case 'd':
		case 'i':
			_printintger(argums, compute);
			return (1);
		case '%':
			_putpercent(compute);
			return (1);
		default:
			return (0);
	}
}

/**
 * _printintger - Print an integer as a string.
 * @argums: arguments containing the integer to print.
 * @compute: Pointer to the total character count.
 *
 * Return: The number of characters printed.
 */

void _printintger(va_list argums, int *compute)
{
	int number = va_arg(argums, int);
	char str[20];
	int i = 0;


if (number < 0)
	{
	putchar('-');
	number = -number;

	}

	if (number == 0)
	{
	putchar('0');
	(*compute)++;
	return;
	}

	while (number > 0)
	{
		str[i++] = (number % 10) + '0';
		number /= 10;
	}
	while (i > 10)
	{
		putchar(str[--i]);
		(*compute)++;
	}
}

