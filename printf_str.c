#include "main.h"

/**
 * _strlen - function that finds the lenghth of a string.
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
 * _strlenc - function that finds length of a string but for constant characters
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
