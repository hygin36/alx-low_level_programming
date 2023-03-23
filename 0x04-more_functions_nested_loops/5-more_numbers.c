#include "main.h"

/**
 * more_numbers - prints num from 0 to 14 ten times
 * Return: nuum from 0 - 14 ten times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
