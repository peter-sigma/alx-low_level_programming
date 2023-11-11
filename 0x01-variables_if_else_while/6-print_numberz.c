#include <stdio.h>
/**
 * main - Print single digits to base 10 using putchar function
 * Return: 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
