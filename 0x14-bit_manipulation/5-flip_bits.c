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
	unsigned int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
