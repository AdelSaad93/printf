#include "main.h"

/**
 * _printf - Print formatted text to stdout.
 * @format: The format string containing conversion specifiers.
 * @...: Additional arguments to be printed.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list argums;
	int compute = 0;

	va_start(argums, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			compute++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i')
				compute += _putintg(argums, &compute);
		}
		format++;
	}

	va_end(argums);
	return (compute);

}

/**
 * _putintg - Print an integer as a string.
 * @argums: arguments containing the integer to print.
 * @compute: Pointer to the total character count.
 *
 * Return: The number of characters printed.
 */

int _putintg(va_list argums, int *compute)
{
	int num = va_arg(argums, int);
	char *num_str = _int_to_string(num);
	int len = _printstr(num_str);

	free(num_str);
	(*compute) += len;
	return (len);
}
/**
 * _int_to_string - Convert an integer to a string.
 * @num: The integer to convert.
 *
 * Return: A dynamically allocated string.
 */

char *_int_to_string(int num)
{
	char *str = malloc(20 * sizeof(char));

	if (str == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}

	sprintf(str, "%d", num);

	return (str);
}
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
/**
 * _printintg - Print an integer.
 *
 * @number: The integer to be printed.
 *
 * Return: The number of characters.
 */

int _printintg(int number)
{
	int compute = 0;

	if (number < 0)
	{
	putchar('-');
	number = -number;
	compute++;
	}

	if (number == 0)
	{
	putchar('0');
	return (1);
	}

	if (number / 10)
	{
	compute += _printintg(number / 10);
	}

	putchar(number % 10 + '0');
	compute++;

	return (compute);
}

