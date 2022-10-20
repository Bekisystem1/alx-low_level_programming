#include "main.h"
/**
   * _isdigit - Return 1 if c is digit (0-9)
    * @c: Digit to be checked
     *
      *Return: 1 if c is digit. otherwise 0
       */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

