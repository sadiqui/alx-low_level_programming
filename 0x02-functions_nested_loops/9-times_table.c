#include "main.h"

/**
 *  * times_table - prints the 9 times table with requested output
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 1;

		_putchar('0'); /* start each line with 0 */

		while (j <= 9) /* nested loop for the table */
		{
			int prdct = i * j; /* product defined */

			_putchar(',');
			_putchar(' ');

			/* get the 1st digit if any, otherwise put space */
			if (prdct > 9)
				_putchar('0' + prdct / 10);
			else
				_putchar(' ');

			/* get the 2nd digit to the left */
			_putchar('0' + prdct % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
