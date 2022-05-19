#include "main.h"

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
            
        }
        
    }
    va_end(args);

    return (n_displayed);
}
