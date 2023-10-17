#include "main.h"
#include <stdarg.h>

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

	_putcharac(c);

	return (1);
}

