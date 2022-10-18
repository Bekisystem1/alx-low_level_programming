#include <stdio.h>
#include <string.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
int i;
char greetings[] = "_putchar";

for (i = 0; i < strlen(greetings); i++)

	putchar(greetings[i]);
putchar('\n');
return (0);
}

