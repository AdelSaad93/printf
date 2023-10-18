#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

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
					putchar(*format);
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

