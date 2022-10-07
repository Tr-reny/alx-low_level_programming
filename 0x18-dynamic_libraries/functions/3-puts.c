#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Created by : Sanctus-Peter
 * cc: 12th july, 2022.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
