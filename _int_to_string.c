#include <stdio.h>
#include <stdlib.h>

/**
 * _int_to_string - Convert an integer to a string.
 * @num: The integer to convert.
 *
 * Return: A dynamically allocated string.
 */

char *_int_to_string(int num)
{
	char *str = malloc(20 * sizeof(char));

	if (str == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}

	sprintf(str, "%d", num);

	return (str);
}

