#include "main.h"

/* print_char */
int _print_char(va_list args)
{
    char c = va_arg(args, int);
    return (_write(c));
}

/* print_string */
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

/* print_integer */
int _print_integer(va_list args)
{
	int num_length;

	num_length = _print_numbers(args);
	return (num_length);
}

/* print_unsigned_integer */
int _unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	   return (_unsigned_number(num));
	
	if (num < 1)
	   return (-1);
	return (_unsigned_number(num));
}



