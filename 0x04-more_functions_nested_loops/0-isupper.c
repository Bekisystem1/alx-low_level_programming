#include "main.h"
/**
   * _isupper - Return 1 if c is uppercase letter
    * @c: Letter to be checked
     *
      *Return: 1 if letter is uppercase. otherwise 0
       */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
