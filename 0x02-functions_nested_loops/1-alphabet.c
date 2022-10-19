#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (success)
      */
#include "main.h"
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/**
   * print_alphabet - Print lowercase letters
    *
     */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
