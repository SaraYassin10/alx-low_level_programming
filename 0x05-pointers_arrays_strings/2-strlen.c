#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: String parameter
 *
 * Return: 0 (success)
*/

int _strlen(char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
	++counter;
return (counter);
}
