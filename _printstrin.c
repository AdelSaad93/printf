#include "main.h"
#include <stdarg.h>

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
		_putcharac(*strin);
		strin++;
		compute++;
	}

	return (compute);
}

