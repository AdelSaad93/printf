#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putcharac(char c);

int _printcharac(va_list argums, int *compute);

int _putstring(va_list argums);

int _printintg(int number);

int _putpercent(void);

int _processformat(const char *format, va_list argums);

int _handlespecifier(const char *format, va_list argums);

int _printf(const char *format, ...);

void _printintger(va_list argums, int *compute);

char *_int_to_string(int num);

int _printstr(char *str);

int _putspecifier(const char *format, va_list argums, int *compute);


#endif

