#include "main.h"

/**
 * print_sign - check the code alphabet.
 *@n: The number checked
 * Return: 1 forpositive -1 for negative  and 0 for else
 */
int print_sign(int n)
{
if (n  > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
