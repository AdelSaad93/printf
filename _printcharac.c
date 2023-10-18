#include "main.h"
#include <stdarg.h>
#include <stdio.h>

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

		_putcharac(c);

		(*compute)++;

		return (1);
}

