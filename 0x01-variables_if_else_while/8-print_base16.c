#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int n = 0;
char c;
while (n < 10)
{
	putchar((n % 10) + '0');
	n = n + 1;
}
for (c = 97; c < 103; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
