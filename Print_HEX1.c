#include "main.h"

/**
 * print_HEX1 - converts to hex
 * @val: argument to convert
 *
 * Return: counter
 */
int print_HEX1(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 10;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 10;
		tem = tem / 10;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 0)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
