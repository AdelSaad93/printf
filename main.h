#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printcharac(va_list argums);
int _printstrin(va_list argums);
int _printintg(int number);
int _putspecifier(const char *format, va_list argums);
int _printf(const char *format, ...);


#endif

