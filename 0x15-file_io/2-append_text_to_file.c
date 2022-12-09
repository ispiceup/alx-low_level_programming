#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: name of file
 * @text_content: string to add to the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dj, status, n;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	dj = open(filename, O_APPEND | O_WRONLY);
	if (dj == -1)
		return (-1);

	for (n = 0; text_content[n] != '\0'; n++)
		;
	status = write(dj, text_content, n);
	if (status == -1)
		return (-1);

	close(dj);
	return (1);
}
