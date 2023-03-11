#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *(long int) (argv[2] - '0')
 * @argc: count args
 * @argv: store all args
 * Return: exit condition if code is successful or not
 */


int main(int argc, char **argv)
{
	long int ans;

	if (argc == 3)
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", ans);
	}
	else
	{
		printf("Error\n");
	}
	exit(EXIT_SUCCESS);
}
