#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @letters: number of letters it should read and print
 * @filename: pointer to the filename
 * Return: actual number of letters it could read and print, otherwise
 * 0 if file cannot be opened or read, or
 * filename in NULL, or
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (wr);
}
