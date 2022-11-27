#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
void _putchar(char ch);
void _reverse(char *s);
char *rot13(char *str);
int _len(int n);
void _min(void);
void _100plus(int);
int _percent(char ch, int r_len, va_list v);
int _base_convert(int, int);
int _other_conversions(char ch, int r_len, va_list arg_ptr);
int _strlen(char *);
char *_strcpy(char *);
#endif
