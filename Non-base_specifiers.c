#include "main.h"

/**
 * _print_str - Prints a string
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _print_str(char *string)
{
	int count = 0;

	if (string)
		while (*string)
		{
			_write(*string++);
			count += 1;
		}
	else
		return (_print_str("(null)"));
	return (count);
}

/**
 * _print_integer - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
