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
					compute += _putspecifier(format, argums, &compute);
				}

				format++;
			}

			va_end(argums);
			return (compute);
}

