#include "main.h"

/**
 * ch - function to return char
 * @args: list given
 * Return: number of char printed
 */
int get_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}