#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int initialamount, i;
	int cents = 0;
	int cent_coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		initialamount = atoi(argv[1]);
		if (initialamount >= 0)
		{
			for (i = 0; initialamount != 0; i++)
			{
				cents = (cents + initialamount / cent_coins[i]);
				initialamount = (initialamount % cent_coins[i]);
			}
			printf("%d\n", cents);
			return (0);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

