#include <stdio.h>

/**
 * main - Entry point
 * print out the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{

        char charType;
        int intType;
        long int lintType;
        long long int llintType;
        float floatType;

        printf("Size of char: %zu byte\n", sizeof(charType));
        printf("Size of int: %zu bytes\n", sizeof(intType));
        printf("Size of long int: %zu bytes\n", sizeof(lintType));
        printf("Size of long long int: %zu bytes\n", sizeof(llintType));
        printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
