#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if file exists, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int xletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (xletters = 0; text_content[xletters]; xletters++)
			;
		rwr = write(file_d, text_content, xletters);

		if (rwr == -1)
		return (-1);
	}
	close(file_d);

	return (1);
}
