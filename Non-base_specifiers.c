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
