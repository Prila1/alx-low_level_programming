#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @m: The number to be printed in binary.
 */
void print_binary(unsigned long int m)
{
	if (m > 1)
		print_binary(m >> 1);

	_putchar((m & 1) + '0');
}
