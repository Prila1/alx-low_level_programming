#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @m: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int m, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((m & (1 << index)) == 0)
		return (0);

	return (1);
}
