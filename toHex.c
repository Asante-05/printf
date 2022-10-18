#include "main.h"

/**
 * printf_HEX_aux - convert to hexdecimal
 * @num: number to convert.
 * Return: len.
 */
int toHex(unsigned int num)
{
	int i;
	int *array;
	int len = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		len++;
	}
	len++;
	array = malloc(len * sizeof(int));

	for (i = 0; i < len; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (len);
}