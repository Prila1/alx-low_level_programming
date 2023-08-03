#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 *
 * Description: This function takes an unsigned long int as input and
 * prints its binary representation without using arrays, malloc, %, or / operators.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started_printing = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			started_printing = 1;
		}
		else if (started_printing)
			_putchar('0');

		mask >>= 1;
	}
	if (!started_printing)
		_putchar('0');
}
