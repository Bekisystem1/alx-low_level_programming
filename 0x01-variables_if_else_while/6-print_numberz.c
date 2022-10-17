#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
while (n < 10)
{
	putchar((n % 10) + '0');
	n = n + 1;
}
putchar('\n');
return (0);
}

