#include "main.h"

/**
 * _isalpha - check the code alphabet.
 *@c: The character checked
 * Return: 1 for alpha and 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
