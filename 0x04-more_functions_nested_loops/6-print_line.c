#include "main.h"
/**
   * print_line - Print straight line
    *@n: Number of times the character is printed
     *
      */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n != 0 || n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

