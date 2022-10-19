#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (success)
      */
#include "main.h"
int main(void)
{
	printString("_putchar");
	putchar('\n');
return (0);
}
/**
   * printString- Short description, single line
    * @ch: The string to be printed
      *
	*/
void printString(char *ch)
{
while (*ch != '\0')
{
	putchar(*ch); /* print letter */
	ch = ch + 1;  /* point to the next letter.*/
}
}
