#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: count args
 * @argv: store all args
 * Return: exit condition if code is successful or not
 */


int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
