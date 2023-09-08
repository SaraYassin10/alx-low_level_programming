#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints all digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int digit = 0;

while (digit <= 9)
{
	putchar (digit + '0');
	digit++;
}
putchar ('\n');

return (0);
}