#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int n_displayed = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_write(format[i]);
			n_displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_print_char(args);
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				_print_str(args);
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_write('%');
				n_displayed++;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				_print_integer(args);
			}
			else if (format[i + 1] == 'i')
			{
				i++;
				_print_integer(args);
			}
			else if (format[i + 1] == 'b')
			{
				i++;
				_print_binary(args);
			}
			else if (format[i + 1] == 'u')
			{
				i++;
				_unsigned_integer(args);
			}
			else if (format[i + 1] == 'o')
			{
				i++;
				_print_octal(args);
			}
			else if (format[i + 1] == 'x')
			{
				i++;
				_print_hex(args);
			}
			else if (format[i + 1] == 'X')
			{
				i++;
				_print_heX(args);
			}
		}
	}
	va_end(args);

	return (n_displayed);
}
