#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	for (unsigned int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		unsigned long int n_bit = (n >> i) & 1;
		unsigned long int m_bit = (m >> i) & 1;

		if (n_bit != m_bit)
			count++;
	}

	return (count);
}
