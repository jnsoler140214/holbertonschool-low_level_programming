#include <stdio.h>

/**
 * main - numbers with ,
 * Return: 0
 *
 */

int main(void)
{
int x;
do {
for (x = 0; x <= 9; x++)
{
putchar(x + 48);
if (x != 9)
{
putchar(',');
putchar(' ');
}}
} while (x < 9);
putchar('\n');
return (0);
}
