#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (success)
      */
#include "main.h"
/**
    * @ch: The string to be printed
     */
void printString(char *ch);
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
	putchar(*ch);
	ch = ch + 1;
}
}

