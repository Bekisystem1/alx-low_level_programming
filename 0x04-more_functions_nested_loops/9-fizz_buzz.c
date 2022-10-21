#include <stdio.h>
/**
   * main - check the code
    *
     * Return: Always 0.
      */
void print_natural_numbers(void);
int main(void)
{
	print_natural_numbers();
	return (0);
}
/**
   * print_natural_numbers - Print numbers from 1 to 100
    *
     */
void print_natural_numbers(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if
		(i % 3 == 0)
		{
			printf("Fizz");
		}
		else if
		(i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
}



