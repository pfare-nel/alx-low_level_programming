#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file_d, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(file_d);

	free(buffer);

	return (nwr);
}
