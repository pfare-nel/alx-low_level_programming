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
	ssize_t file_read, file_write;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	file_read = read(file_d, buffer, letters);
	file_write = write(STDOUT_FILENO, buffer, file_read);

	close(file_d);

	free(buffer);

	return (file_read);
}
