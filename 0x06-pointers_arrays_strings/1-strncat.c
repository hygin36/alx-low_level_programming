#include "main.h"

/**
 * _stncat - concatenate two strings
 * using at most n byutes from src
 * @dest: input values
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_stncat(char *dest, char *src,int n)
{
	int i;
	int j;

	i=0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
