#include "main.h"
#include <stdio.h>

/**
 * err_chk - checks if files can be opened and exit with error 98 message.
 * @srcfile: file_from.
 * @destfile: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void err_chk(int srcfile, int destfile, char *argv[])
{
	if (srcfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main method for 3-cp.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int srcfile, destfile, errpres;
	ssize_t socsize, charwrite;
	char charstri[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	srcfile = open(argv[1], O_RDONLY);
	destfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_chk(srcfile, destfile, argv);

	socsize = 1024;
	while (socsize == 1024)
	{
		socsize = read(srcfile, charstri, 1024);
		if (socsize == -1)
			err_chk(-1, 0, argv);
		charwrite = write(destfile, charstri, socsize);
		if (charwrite == -1)
			err_chk(0, -1, argv);
	}

	errpres = close(srcfile);
	if (errpres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcfile);
		exit(100);
	}

	errpres = close(destfile);
	if (errpres == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcfile);
		exit(100);
	}
	return (0);
}
