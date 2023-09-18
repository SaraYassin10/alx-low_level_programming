#include "main.h"

/**
 * print_rev - function prints a string in reverse
 *
 * @s: input a string
 *
 * Return: 0 (success)
*/

void print_rev(char *s)
{
int i = 0;

while (s[i])
	i++;
while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
