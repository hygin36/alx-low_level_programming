#include "main.h"

/**
 * _idigit - check if charcter is a digit
 * @c: charcter to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '1')
		return (1);
	else
		return (0);
}
