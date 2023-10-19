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


