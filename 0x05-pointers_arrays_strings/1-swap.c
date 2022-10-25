#include "main.h"
/**
   * swap_int - swap two numbers
    * @a: variable a
     * @b: variable b
      *
       */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
