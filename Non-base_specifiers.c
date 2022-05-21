#include "main.h"

/**
 * _print_str - Prints a string
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
 * Return: Will return the amount of characters printed.
 */
int _print_integer(long int var)
{
	int count = 0;

	if (var < 0)
	{
		_write('-');
		count += 1;
		var = -var;
	}

	if (var / 10)
		count += _print_integer(var / 10);

	_write(var % 10 + '0');
	count += 1;

	return (count);
}
