#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destiny to concatenate second string
 * @src: source of the frist string
 *
 * Return: char- string concatenated
 */


char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;

	}

	dest[x] = '\0';
	return (dest);

}
