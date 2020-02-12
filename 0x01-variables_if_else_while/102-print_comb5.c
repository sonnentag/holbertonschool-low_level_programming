#include <stdio.h>

/*
 * main - print 2 incrementing double digits
 *
 * Return: 0
 */
int n,x;

int main(void)
{
for (n = 0; n <= 89; n++)
{
	for (x = 1; x <= 90; x++)
	{
		putchar((n/10) + '0');
		putchar((n%10) + '0');

		putchar(' ');

		putchar((x/10) + '0');
		putchar((x%10) + '0');
	if ( n == 89 && x == 90)
	{ 
	}
	else
	{
	putchar(',');	
	putchar(' ');	
	}
	}	
n = x;
x++;
}
putchar('\n');

return (0);
}
