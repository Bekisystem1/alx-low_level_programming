#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 97;
while (c < 123)
{
putchar(c);
putchar('\n');
c = c + 1;
}
return (0);
}
