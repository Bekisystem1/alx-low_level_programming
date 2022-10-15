#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 97;
char d = 65;
while (c < 123)
{
putchar(c);
c = c + 1;
}
while (d < 91)
{
putchar(d);
d = d + 1;
}
putchar('\n');
return (0);
}
