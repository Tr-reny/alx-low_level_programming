#include <string.h>
#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to the main string
 * @accept: pointer to the substring
 *
 * Return: the number of bytes in the innitial segment of s
 *
 * Created by: Sanctus-Peter
 * cc: 18th July 2022
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
