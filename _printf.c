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

			while (*format != '\0')
			{
				if (*format == '%')
				{
					format++;
					switch (*format)
					{
					case 'c':
						compute += _printcharac(argums);
						break;
					case 's':
						compute += _putstring(argums);
						break;
					case '%':
						compute += _putpercent();
						break;
					default:
						_putcharac(*format);
						compute++;
						break;
					}
				}
				else
				{
					_putcharac(*format);
					compute++;
				}
				format++;
			}
		va_end(argums);
			return (compute);
}

/**
 * _printcharac - Print a Character.
 *
 * @argums: List Of Arguments.
 *
 * Return: The Number Of Characters.
 *
*/
int _printcharac(va_list argums)
{
		char c = va_arg(argums, int);

		return (_putcharac(c));
}

/**
 * _putstring - Print a String
 *
 * @argums: List Of Arguments.
 *
 * Return: The Number Of Characters.
 *
*/
int _putstring(va_list argums)
{
		char *strin = va_arg(argums, char *);
		int leng  = 0;

		if (strin == NULL)
		{
			strin = "(null)";
		}
		while (*strin)
		{
			_putcharac(*strin);
			strin++;
			leng++;
		}

		return (leng);
}
/**
 * _putpercent - Print a percent character '%'.
 *
 * Return: The number of characters printed.
 */

int _putpercent(void)
{
	_putcharac('%');
	return (1);
}
/**
 * _putcharac - Writes a Character.
 *
 * @c: The Character To Be written.
 *
 * Return: The Numbers Of The Characters.
 *
*/
int _putcharac(char c)
{
	return (write(1, &c, 1));
}

