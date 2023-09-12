#include "main.h"

/**
 * print_last_digit - print last digit of number.
 *
 * @n: takes number input
 *
 * Return: last digit
*/

int print_last_digit(int n) /** function to print last digit **/
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;


	_putchar(lastdigit + '0');
	return (lastdigit);
}
