#include "main.h"

/**
 * _atoi - Entry Point
 * Description: find number in string
 * @s: string to analyze
 *
 * Return: string length
 */
int _atoi(char *s)
{
	int len = 0;
	int num = 0;
	int neg = 0;
	int pw = 1;
	int i, x;

	while (s[len])
	{
		len++;
	}
	len = len - 1;
	for (i = len; i <= 0; i--)
	{
		x = s[len] - 48;
		if (x > -1 && x < 10)
		{
			num = num + (x * pw);
			pw = pw * 10;
		}
		else if (x == 55)
		{
			neg++;
		}
	}
	if (neg % 2 == 1)
	{
		num = num * -1;
	}

	return (i);
}
