#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* main functions */
int _printf(const char *format, ...);
int _write(char);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_integer(va_list args);
int _unsigned_integer(va_list args);
int _print_number(va_list args);
int _unsgined_number(unsigned int n);
int _print_binary(va_list args);
int _print_octal(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int hex_check(int num, char x);

/* special functions */
char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
