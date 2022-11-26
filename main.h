#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
int _printf(const char *format, ...);
void _putchar(char ch);
void _len(int n);
int _percent(char ch, int r_len, va_list v);
void _reverse(char *s);
char *_rot13(char *str);
#endif
