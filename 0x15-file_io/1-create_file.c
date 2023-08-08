#include "main.h"

/**
 * create_file - Create file filename and write text_content to it.
 * @filename: name of text file to create
 * @text_content: string of char to be written
 * Return: 1 if successful, -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, length, charwrite;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (filedes == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}
	for (length = 0; text_content[length] != '\0'; length++)
	{
	}
	charwrite = write(filedes, text_content, length);
	if (charwrite < 1)
		return (-1);
	close(filedes);
	return (1);
}
