#include <unistd.h>

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

