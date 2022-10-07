#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to be checked
 *
 * Created - Sanctus-Peter
 * cc: 5th july, 2022
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
