#include <stdio.h>

/**
 * main - Entry points
 *
 * Description: lower case alphabet reverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
char c = 'z';

while (c >= 'a')
{
	putchar (c);
	c--;
}
putchar ('\n');

return (0);
}
