#include "main.h"

/**
 * print_rot13 - converter to rot13
 * @args: arguments
 *
 * Return: counter
 */

int print_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char a1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b1[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a1[j] && !k; j++)
		{
			if (s[i] == a1[j])
			{
				_putchar(b1[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
