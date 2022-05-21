#include "main.h"

/**
 * _print_binary - Converts a number from base 10 to binary
 * @n: number to be coverted to a binary
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
 * @num: number to be coverted to octal base
 * Return: Number of symbols printed to stdout
 */
int _print_octal(unsigned int num)
{
	int octal[sizeof(unsigned int) * 8], i, j = 0, char_count = 0, mod;

	while (num)
	{
		mod = num % 8;
		octal[j++] = '0' + mod;
		num /= 8;
	}
	for (i = j - 1; i >= 0; i--)
		char_count += _write(octal[i]);
	return (char_count);
}

/**
 * _print_hex - Prints a representation of a decimal number on base16 lowercase
 * @num: number to be coverted to hexadecimal
 * Return: Number of characters printed
 */
int _print_hex(unsigned int num)
{
	int hexa[sizeof(unsigned int) * 8], j = 0, i, char_count = 0, mod;

	while (num)
	{
		mod = num % 16;
		if (mod < 10)
			hexa[j++] = '0' + mod;
		else
			hexa[j++] = '7' + mod;
		num /= 16;
	}
	for (i = j - 1; i >= 0; i--)
		char_count += _write(hexa[i]);
	return (char_count);
}
