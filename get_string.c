#include "main.h"
/**
 * get_string - prints string to stdout
 * @args: list
 * Return: number of char
 */

int get_string(va_list args)
{
	char *strings = va_arg(args, char *);
	int len = 0;

	if (strings == NULL)
	{
		strings = "(null)";
	}
	while (strings[len] != '\0')
	{
		_putchar(strings[len]);
		len++;
	}
	return (len);
}
