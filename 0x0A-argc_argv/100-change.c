#include "main.h"
#include <stdlib.h>
int changecalc(int amt);
/**
 * main - Entry point
 *(long int) (argv[2] - '0')
 * @argc: count args
 * @argv: store all args
 * Return: exit condition if code is successful or not
 */

int main(int argc, char **argv)
{
	int ans = 0, e = 0, amt = 0;

	if (argc == 2)
	{
		amt = atoi(argv[1]);
		if (amt > 0)
		{
			ans = changecalc(amt);
			printf("%d\n", ans);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		e = 1;
	}
	return (e);
}

/**
 * changecalc - Entry point
 *
 * @amt: amout to make change for
 * Return: number of coins
 */
int changecalc(int amt)
{
	int ans = 0, rem = 0;

	if (amt > 25)
	{
		rem = amt % 25;
		amt = amt - rem;
		ans = ans + amt / 25;
		amt = rem;
	}
	if (amt > 10)
	{
		rem = amt % 10;
		amt = amt - rem;
		ans = ans + amt / 10;
		amt = rem;
	}
	if (amt > 5)
	{
		rem = amt % 5;
		amt = amt - rem;
		ans = ans + amt / 5;
		amt = rem;
	}
	if (amt > 2)
	{
		rem = amt % 2;
		amt = amt - rem;
		ans = ans + amt / 2;
		amt = rem;
	}
	if (amt > 1)
	{
		rem = amt % 1;
		amt = amt - rem;
		ans = ans + amt / 1;
		amt = rem;
	}
	return (ans);
}
