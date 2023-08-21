#include "main.h"

/**
 * _puts - function that prints a string
 * @str: - poiner to the string
 * Return: string and now line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i * *;
	}
	_putchar('\n');
}
