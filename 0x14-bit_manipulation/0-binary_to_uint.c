#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number.
 * @m: The number to be converted and printed.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int ui;
	int len, base_two;

	if (!m)
		return (0);

	ui = 0;

	for (len = 0; m[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (m[len] != '0' && m[len] != '1')
		{
			return (0);
		}

		if (m[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
