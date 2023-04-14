#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one
 number to another.
 * @n: number to flip to get the other
 * @m: number to get
 *
 * Return: number of bits counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}

	return (count);
}
