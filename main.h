#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>



int _printcharac(va_list argums, int *compute);

int _putstring(va_list argums, int *compute);

void _printintger(va_list argums, int *compute);

int _printintg(int number);

int _putpercent(int *compute);

char *_int_to_string(int num);

int _printstr(char *str);

int _putspecifier(const char *format, va_list argums, int *compute);

int _printf(const char *format, ...);


#endif

