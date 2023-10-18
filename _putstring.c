#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

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
			_putcharac(*strin);
			strin++;
			(*compute)++;
		}

		return (leng);
}

