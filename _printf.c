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
	int escape = 0;

	while (*format != '\0')
	{
		if (*format == '%' && !escape)
		{
			format++;
			compute += _handlespecifier(format, argums, &escape);
		}
		else
		{
			_putcharac(*format);
			compute++;
		}
		if (*format == '%' && escape)
		{
			escape = 0;
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
 * @escape: A pointer to an integer
 * Return: The number of characters processed and outputted for this specifier.
 */
int _handlespecifier(const char *format, va_list argums, int *escape)
{
	int compute = 0;

	if (*format == '%' && !*escape)
	{

	}
	else
	{
		switch (*format)
		{
			case 'c':
				compute += _printcharac(argums);
				break;
			case 's':
				compute += _putstring(argums);
				break;
			case '%':
				_putpercent();
				compute++;
				break;
			default:
				_putcharac('%');
				compute++;
				if (*format != '\0')
				{
					_putcharac(*format);
					compute++;
				}
				break;
		}
	}

	*escape = 0;

	return (compute);
}

