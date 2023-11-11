/**
 * clear_bit - a function that clears bit
 * @n: array of values
 * @index: index to clear
* Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

