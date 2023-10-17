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
return (_putcharac(va_arg(argums, int)));
}

