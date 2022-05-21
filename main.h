#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/* main functions */
int _printf(const char *format, ...);
int _write(char);
int _print_str(char *string);
int _print_binary(unsigned int n);

#endif
