#include "main.h"

/**
 * append_text_to_file - add data to exisiting file
 * @filename: name of file to create and store data to
 * @text_content: data to be stored to file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescriptor, wtp, textlen = 0;

	if (filename == NULL) /* check filename of file to be read is present */
		return (-1);

	filedescriptor = open(filename, O_APPEND | O_WRONLY);
	if (filedescriptor == -1) /* check file was opened successfully */
		return (-1);
	if (text_content == NULL) /*check if there is data to write */
	{
		close(filedescriptor); /* if no data close file*/
		return (1);
	}
	while (text_content[textlen] != '\0') /*count length of data to be written */
		textlen++;
	wtp = write(filedescriptor, text_content, textlen); /* send data to file */
	if (wtp < 1) /* check data successfully sent to output */
		return (0);
	close(filedescriptor); /* close file */
	return (1);
}
