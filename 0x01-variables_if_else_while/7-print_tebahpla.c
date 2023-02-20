#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Description: reverse
 * Return: 0
 */
int main(void)
{
        char ch;
        for (ch = 'z'; ch >= 'a'; ch--)
        {
        print(ch);
        }
        putchar('\n');
        return (0);
}
