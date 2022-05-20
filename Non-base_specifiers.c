#include "main.h"

/**
 * _print_char - Prints character
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_write(c));
}

/**
 * _print_str - Prints a string
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _print_str(va_list args)
{
	int j;
	char *s = va_arg(args, char *);

	for (j = 0; s[j] != '\0'; j++)
	{
		_write(s[j]);
	}
	return (0);
}

/**
 * _print_integer - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _print_integer(va_list args)
{
	int num_length;

	num_length = _print_number(args);
	return (num_length);
}

/**
 * _unsigned_integer - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int _unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_unsgined_number(num));
	if (num < 1)
		return (-1);
	return (_unsgined_number(num));
}
