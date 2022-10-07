#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to string dest
 *
 * Created by: Sanctus-Peter
 * cc: 15th july, 2022.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
