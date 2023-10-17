#include "main.h"

/**
 * _printfunc - Custom printf implementation for 'd' and 'i'.
 * @format: A format string that may contain conversion specifiers.
 * @...: Additional arguments corresponding to the conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null character).
 */
int _printfunc(const char *format, ...)
{
	va_list argums;
	int count = 0;

	va_start(argums, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putcharac(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int number = va_arg(argums, int);

				count += _printintg(number);
			}
			else
			{
				_putcharac('%');
				_putcharac(*format);
				count += 2;
			}
		}
		format++;
	}

	va_end(argums);
	return (count);
}
