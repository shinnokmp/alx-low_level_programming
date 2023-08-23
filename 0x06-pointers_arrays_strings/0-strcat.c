#include "main.h"
#include <stdio.h>

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (*(src + len1) != '\0')
	{
		len1++;
	}
	while (*(dest + len2) != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len1; i++)
	{
		*(dest + (len2 + i)) = *(src + i);
	}
	return (dest);
}
