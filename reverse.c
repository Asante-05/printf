#include "main.h"

/**
 *
 *
 */

int reverse(va_list args)
{
    char *string = va_arg(args, char *);
    int length = _strlen(string);

    int i;
    if (string == NULL)
    {
        return (-1);
    }
    for (i = length; i >= 0; i--)
    {
        _putchar(string[i]);
    }
    return (length);
}