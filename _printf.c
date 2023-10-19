#include "main.h"
/**
 * _printf - Function to Handle Format Specificers.
 * @format: String Containing Specifiers.
 * Return: Number Of Characters Printed Excluding null.
*/
int _printf(const char *format, ...)
{
		va_list argums;
		int compute = 0;

		if (format == NULL)
		{
			return (-1);
		}
		va_start(argums, format);

		compute = _processformat(format, argums);

		va_end(argums);

				return (compute);
}

/**
 * _processformat - Processes the format string and handles format specifiers.
 *
 * @format:  A pointer to the format string.
 * @argums: A va_list containing the variable arguments.
 *
 * Return: The total number of characters processed and outputted.
 */
int _processformat(const char *format, va_list argums)
{
	int compute = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			compute += _handlespecifier(format, argums);
		}
		else
		{
			compute += _putcharac(*format);
		}
		format++;
	}
	return (compute);
}

#include "main.h"
/**
 * _handlespecifier - Handles a format specifier.
 *
 * @format: A pointer to the format specifier in the format string.
 * @argums: A va_list containing the variable arguments.
 *
 * Return: The number of characters processed and outputted for this specifier.
 */
int _handlespecifier(const char *format, va_list argums)
{
	int compute = 0;

	if (*format == '%')
	{
		compute += _putpercent();
	}
	else if (*format == 'c')
	{
		compute += _printcharac(argums);
	}
	else if (*format == 's')
	{
		compute += _putstring(argums);
	}
	else
	{
		_putcharac('%');
		compute++;
		if (*format != '\0')
		{
			_putcharac(*format);
			compute++;
		}
	}

	return (compute);
}

