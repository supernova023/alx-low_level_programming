#include "main.h"

/**
 * append_text_to_file - Add text_content to end of file filename.
 * @filename: name of text file to append
 * @text_content: string of char to be written
 * Return: 1 if successful, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, length, charwrite;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_APPEND | O_WRONLY);
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
