#include "holberton.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 or 0
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

