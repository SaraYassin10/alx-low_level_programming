#include "main.h"

/**
 * swap_int - swapping 2 integers using pointers
 *
 * @a: first integer
 * @b: second integer
 * 
 * Return: 0 (success)
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
