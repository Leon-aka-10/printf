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
        int count;
	int total = 0;
	int flag = 0;

	if (!format)
		return (0);

	va_start(args, format);
	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			flag = 0;
			switch (format[count])
			{
				case 'c':
					_write(va_arg(args, int));
					total += 1;
					break;
				case 's':
					total += _print_str(va_arg(args, char *));
					break;
				case '%':
					_write('%');
					total += 1;
					break;
				case 'd':
					total += _print_integer((long)(va_arg(args, int)));
					break;
				case 'i':
					total += _print_integer((long)(va_arg(args, int)));
					break;
			

				case 'b':
					total += _print_binary(va_arg(args, int));
					break;
				case 'o':
					total += _print_octal(va_arg(args, int));
					break;
				case 'x':
					total += _print_hex(va_arg(args, int));
					break;
				case 'X':
					total += _print_hex(va_arg(args, int));
					break;
				

				default:
					_write('%');
					_write(format[count]);
					total += 2;
			}
		}
		else
		{
			_write(format[count]);
			total += 1;
		}
	}
	va_end(args);

	return (total);
}
