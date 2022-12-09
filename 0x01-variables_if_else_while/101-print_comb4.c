#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)/* prints hundreds digit*/
	{
		for (tens = '0'; tens <= '9'; tens++)/* prints tes digit*/
		{
			for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
			{
				if (!((ones == tens) || (tens == hundreds) ||
						(tens > ones) || (hundreds > tens))) /*eliminates repetition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&
								tens == '8')) /*adds commas and spaces*/
					{
						putchar('.');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
