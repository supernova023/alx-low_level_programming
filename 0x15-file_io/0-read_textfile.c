#include "main.h"

/**
 * read_textfile - check the code
 * @filename: name of file to read
 * @letters: number of letters to be read and printed
 * Return: actual value of letters read and printed, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	char *buffer;
	size_t rff, wtp;

	if (filename == NULL) /* check filename of file to be read is present */
		return (0);
	if (letters < 1) /* check number of characters to be read > 0 */
		return (0);

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1) /* check file was opened and read successfully */
		return (0);
	buffer = malloc(letters); /* define buffer size using malloc */
	if (buffer == NULL) /* check buffer defined successfully */
		return (0);
	rff = read(filedescriptor, buffer, letters); /* read from file and store */
	if (rff < 1) /* check data read from file and stored in buffer successfully */
		return (0);
	wtp = write(STDOUT_FILENO, buffer, rff); /* send data from buffer to output */
	if (wtp < 1) /* check data successfully sent to output */
		return (0);
	free(buffer); /* clear data from buffer */
	close(filedescriptor); /* close file */
	return (wtp);
}
