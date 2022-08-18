#include "holberton.h"

/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

unsigned long int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}


/**
 * print_binary - prints decimal to binary
 * Description: first, finds the biggest exponent for 2, then go down
 * to find the smaller values
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 0; _pow_recursion(2, i) <= n; i++)
	;
	if (n == 0)
		i++;

	for (i--; i >= 0; i--)
	{
		if (_pow_recursion(2, i) <= n)
		{
			_putchar('1');
			n -= _pow_recursion(2, i);
		}
		else
			_putchar('0');
	}
}