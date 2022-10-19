#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (success)
      */
#include "main.h"
void print_lowercase(void);
int main(void)
{
	print_lowercase();
	putchar('\n');
	return (0);
}
/**
   * print_lowercase - Print lowercase letters
    *
     */
void print_lowercase(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
