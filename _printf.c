#include "main.h"

int _printf(char *format, ...)
{
    va_list args;

    int strlen = _strlen(format);
    int len = 0;
    int i;

    va_start(args, format);
    for (i = 0; i < strlen; i++)
    {
        if (format[i] == '%')
        {
            switch (format[i + 1])
            {
            case 'c':
                get_char(args);
                i++;
                len++;
                break;

            case 's':
                get_string(args);
                i++;
                len++;
                break;

            case '%':
                _putchar(37);
                i++;
                len++;
                break;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
        }
    }
    va_end(args);
    return len;
}