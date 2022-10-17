#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
	putchar((n % 10) + '0');
	if (n ==9)
	{
		break;
	}
	putchar(',');
	putchar('\t');
	n = n + 1;
}
return (0);
}

