#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putcharac(char c);

int _printcharac(va_list argums);

int _putstring(va_list argums);

int _putpercent(void);

int _puts(const char *str);

int _processformat(const char *format, va_list argums);

int _handlespecifier(const char *format, va_list argums, int *escape);

int _printf(const char *format, ...);


#endif

