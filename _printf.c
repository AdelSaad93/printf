#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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
					switch (*format)
					{
						case 'C':
							compute += _printcharac(argums);
							break;
						case 'S':
							compute += _printstrin(argums);
							break;
						case '%':
							_putcharac('%');
							compute++;
							break;
						case 'd':
							compute += _printintg(va_arg(argums, int));
							break;
						default:
							_putcharac('%');
							_putcharac(*format);
							compute += 2;
					}		break;
				}
				format++;
			}
		va_end(argums);
		return (compute);
}

