#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putcharac(char c);

int _printcharac(va_list argums);

int _printstrin(va_list argums);

int _printintg(int number);

int _putspecifier(const char *format, va_list argums, int *compute);

int _printf(const char *format, ...);

int _printfunc(const char *format, ...);

#endif

