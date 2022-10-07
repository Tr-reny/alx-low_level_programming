#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: integer n, number or size of strings to concatenate
 *
 * Return: pointer to string dest
 *
 * Created by: Sanctus-Peter
 * cc: 15th july, 2022.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
