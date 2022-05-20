#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _write(char);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_integer(va_list args);
int _unsigned_integer(va_list args);
int _print_number(va_list args);
int _unsgined_number(unsigned int n);

#endif
