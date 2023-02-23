#include "main.h"

/**
 * _abs - compute absolutevalue
 *@c: The character checked
 * Return: 1 for absolute value and 0 for else
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
