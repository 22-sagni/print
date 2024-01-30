#include "main.h"

/**
 * _strlen(char *str)
 * @str: pointer to a string
 *
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc: string length func applied to constant char pointer str
 * @str: pointer to character
 *
 * Return: i.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
