#include "main.h"

/**
 * read_textfile – reads a defined number of char from txtfile and print
 * @filename: name of text file to read
 * @letters: number of letters to be read
 * Return: value of write function if successful, 0 if not
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	char *strsto;
	size_t charread, charwrite;

	if (filename == NULL || letters < 1)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	strsto = malloc(letters);
	if (strsto == NULL)
		return (0);
	charread = read(filedes, strsto, letters);
	if (charread < 1)
		return (0);
	charwrite = write(STDOUT_FILENO, strsto, charread);
	if (charwrite < 1)
		return (0);
	free(strsto);
	close(filedes);
	return (charwrite);
}
