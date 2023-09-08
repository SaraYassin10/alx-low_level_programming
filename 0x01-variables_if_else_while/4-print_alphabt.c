#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: A program prints alphabets in lowercase except q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
{
		if(c == 'q'|| c == 'e')
		c++;
	putchar(c);
	c++;
}
        putchar('\n');
	return (0);
}
