#include <stdio.h>
/**
 * main - print base 16 that is 0 to 9 and a to f
 * Description: base 16
 * Return: 0
 */
int main(void)
{
        int i;
        for (i = 48; i < 58; i++)
        {
        putchar(i);
        }
	for (i = 97; i < 103; i++)
        {
        putchar(i);
        }


        putchar('\n');
        return (0);
}
