#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Function to Handle Format Specificers.
 *
 * @format: String Containing Specifiers.
 *
 * @...: Arguments Of Specifiers.
 *
 * Return: Number Of Characters Printed Excluding null.
 *
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
			_putcharac(*format);
			compute++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				compute += _printcharac(argums);
			}
			else if (*format == 's')
			{
				compute += _printstrin(argums);
			}
			else if (*format == '%')
			{
				_putcharac('%');
				compute++;
			}
			else
			{
				_putcharac('%');
				_putcharac(*format);
				compute += 2;
			}
		}
		format++;
	}
	va_end(argums);
	return (compute);
}

