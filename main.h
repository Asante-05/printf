#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_DECIMAL_SIZE(x) ((size_t)(CHAR_BIT * sizeof(x) * 302 / 1000) + 1)

int _putchar(char c);
int _strlen(char *string);
int _printf(char *format, ...);
int get_char(va_list args);
int get_string(va_list args);
#endif