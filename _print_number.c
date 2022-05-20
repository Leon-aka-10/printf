#include "main.h"

/**
 * _print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
*/
int _print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n > 0)
	{
		num = n;
	}
	else
	{
		len += _write('-');
		num = n * -1;
	}
	for (; num / div > 9; )
	{
		div *= 10;
	}
	for (; div != 0; )
	{
		len += _write('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * _unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int _unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
	{
		div *= 10;
	}
	for (; div != 0; )
	{
		len += _write('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}