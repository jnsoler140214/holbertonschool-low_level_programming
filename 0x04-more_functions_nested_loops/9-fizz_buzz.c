#include <stdio.h>


/**
 * main - main entry
 *
 * Return: void
 */




int main(void)
{
	int x;

	for (x = 1; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if ((x % 3 != 0) && (x % 5 != 0))
		{
			printf("%d", x);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}


