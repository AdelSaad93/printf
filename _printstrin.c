#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _printstrin - Print a String
 *
 * @argums: List Of Arguments.
 *
 * Return: The Number Of Characters.
 *
*/
int _printstrin(va_list argums)
{
		char *strin = va_arg(argums, char *);
		int compute = 0;

		if (strin == NULL)
			strin = "(null)";

		while (*strin)
		{
			putchar(*strin);
			strin++;
			compute++;
		}

		return (compute);
}

