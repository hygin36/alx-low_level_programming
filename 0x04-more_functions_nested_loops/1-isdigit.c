#include "main.h"

/**
 * _idigit - check if charcter is a digit
 * @c: charcter to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
