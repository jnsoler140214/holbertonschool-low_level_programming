#include <stdio.h>

/*
 *
 * main - prints name of the file it was compiled from
 *
 * Return: 0 in success
 *
 **/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
