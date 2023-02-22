#include "main.h"

/**
 * _islower - check lower case character
 * @c:the caracter c will be checked
 * Return:lowercase character 1 or 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{return (1);
}
return (0);
}
