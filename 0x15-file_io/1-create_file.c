#include "main.h"

/**
 * create_file - create a file that can be read and written into
 * @filename: name of file to create
 *
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int dq, rstatus, j;

	if (filename == NULL)
		return (-1);

	dq = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (dq == -1)
		return (-1);

	if (text_content)
	{
		for (j = 0; text_content[j] != '\0'; j++)
			;
		rstatus = write(dq, text_content, j);
		if (rstatus == -1)
			return (-1);
	}

	close(dq);
	return (1);
}
