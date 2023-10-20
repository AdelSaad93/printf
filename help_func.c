#include "main.h"

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

	if (c == '\0')
	{
		_putcharac('\0');
		return (1);
	}
	else
	{
		return (_putcharac(c));
	}
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
				char *str = va_arg(argums, char *);

				if (str == NULL)
				{
					return  (_puts("(null)"));
				}
				else
				{
					return (_puts(str));
				}
}
/**
 * _putpercent - Print a percent character '%'.
 *
 * Return: The number of characters printed.
 */

int _putpercent(void)
{
	return (_putcharac('%'));
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

/**
 * _puts - Print a string to the standard output.
 *
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _puts(const char *str)
{
	int compute = 0;

	while (str && *str)
	{
		_putcharac(*str);
		compute++;
		str++;
	}

	return (compute);
}

