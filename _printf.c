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

			while (*format != '\0')
			{
				if (*format == '%')
				{
					format++;
					switch (*format)
					{
					case 'c':
						_printcharac(argums, &compute);
						break;
					case 's':
						_putstring(argums, &compute);
						break;
					case '%':
						_putpercent(&compute);
						break;
					default:
						break;
					}
				}
				else
				{
					putchar(*format);
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
 * @compute: Pointer to the total character count.
 *
 * Return: The Number Of Characters.
 *
*/
int _printcharac(va_list argums, int *compute)
{
		char c = va_arg(argums, int);

		putchar(c);

		(*compute)++;

		return (1);
}

/**
 * _putstring - Print a String
 *
 * @argums: List Of Arguments.
 * @compute: Pointer to the total character count.
 *
 * Return: The Number Of Characters.
 *
*/
int _putstring(va_list argums, int *compute)
{
		char *strin = va_arg(argums, char *);
		int leng  = 0;

		if (strin == NULL)
			strin = "(null)";
		while (*strin)
		{
			putchar(*strin);
			strin++;
			(*compute)++;
		}
		return (leng);
}

/**
 * _putpercent - Print a percent character '%'.
 * @compute: Pointer to the total character count.
 *
 * Return: The number of characters printed.
 */

int _putpercent(int *compute)
{
	putchar('%');
	(*compute)++;

	return (1);
}

