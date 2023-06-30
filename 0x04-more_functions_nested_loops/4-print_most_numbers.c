#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 * Description: Print the numbers excluding 2 ans 4
 * Return: The numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
