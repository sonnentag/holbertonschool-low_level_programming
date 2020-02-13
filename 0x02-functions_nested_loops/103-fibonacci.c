#include <stdio.h>

/**
 * main - print sum of all even fibonacci numbers less than 4000000
 *
 * Return: 0
 */
int main(void)
{

	int fir = 1;
	int sec = 2;
	int nex = 0;
	int sum = 2;

	while (nex <= 4000000)
	{
		nex = fir + sec;
		if (nex % 2 == 0)
		{
			sum += nex;
		}
		fir = sec;
		sec = nex;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
