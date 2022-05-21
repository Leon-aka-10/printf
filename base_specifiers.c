#include "main.h"

/**
 * _print_binary - Converts a number from base 10 to binary
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int _print_binary(unsigned int n)
{
	int binary[sizeof(unsigned int) * 8], mod, i, char_count = 0;
	if (n == 0)
	{
		char_count += _write('0');
		return (char_count);
	}
	if (n == 1)
	{
		char_count += _write('1');
		return (char_count);
	}
	mod = 0;
	for (; n > 0; mod++)
	{
		binary[mod] = '0' + (n % 2);
		n /= 2;
	}
	for (i = mod - 1; i >= 0; i--)
		char_count += _write(binary[i]);
	return (char_count);
}

/**
 * _print_octal - Prints the numeric representation of a number in octal base
 * @args: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */




/**
 * _print_hex - Prints a representation of a decimal number on base16 lowercase
 * @args: List of the arguments passed to the function
 * Return: Number of characters printed
 */

