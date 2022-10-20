#include "main.h"
/**
   *print_line - print slash
    *@n: Number of times slash is printed
     *
      */
void print_line(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n != 0 || n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

