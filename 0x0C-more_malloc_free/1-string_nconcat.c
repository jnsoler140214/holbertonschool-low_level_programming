#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: string1 to concatenate to
 * @s2: string2 to concatenate from
 * @n: bytes of string2 to concatenate
 *
 * Return: Null at error - concat: pointer to result
 */


		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	else
		len1 = 0;
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	else
		len2 = 0;

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);
	for (; x < len1 + n; x++)
	{
		if (x < len1)
			concat[x] = s1[x];
		else
		{
			concat[x] = s2[y];
			y++;
		}
	}
	concat[x] = '\0';
	return (concat);
}
