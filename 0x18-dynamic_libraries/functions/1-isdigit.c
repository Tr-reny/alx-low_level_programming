#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if a var is digit
 * @var: variable to be checked
 *
 * Created by: Sanctus-Peter
 * cc: 7th july 2022
 *
 * Return: 1 if var is digit, else 0
 */
int _isdigit(int var)
{
	if (isdigit(var))
		return (1);
	return (0);
}
