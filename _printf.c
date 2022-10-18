#include "main.h"
/**
 * _printf - prints to stdout
 * @format: used to specify output
 * Return: len of the string
 */
int _printf(char *format, ...)
{
	va_list args;
	int i, len = 0, strlen = _strlen(format);

	if (format == NULL)
	{
		return (-1);
	}
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
				case 'd':
					get_int(args);
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
	return (len);
}
