#include "main.h"

/**
 * read_textfile -reads a text file  prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int an;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	an = open(filename, O_RDWR);
	if (an == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(an, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);

	close(an);
	return (wcount);
}
