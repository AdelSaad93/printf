#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _putcharac(char c);

int _printcharac(va_list argums);

int _putstring(va_list argums);

int _printintg(va_list argums);

int _putpercent(void);

int _puts(const char *str);

int _processformat(const char *format, va_list argums);

int _handlespecifier(const char *format, va_list argums, int *escape);

int _printf(const char *format, ...);

char *_int_to_string(int number);

char *convert_to_string(unsigned int number);



#endif

