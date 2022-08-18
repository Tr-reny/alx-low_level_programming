#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/


int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}


/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			n += _pow_recursion(2, (len - i - 1));
		else if (b[i] != '0')
			return (0);
	}

	return (n);
}

/*Use bitwise operations*/
