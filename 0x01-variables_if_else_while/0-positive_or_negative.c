#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry program
 * Description : It identifies number
 * Return : 0
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positibe\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
