#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	return (j);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	return (j);
}
