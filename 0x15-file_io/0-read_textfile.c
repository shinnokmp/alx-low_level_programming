#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0. O/w - the actual no. of bytes the func can r & p.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if(filename == NULL)
		return 0;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return 0;

	o = open(filename, O_RDONLY);
	r = read(o, minter, letters);
	w = write(STDOUT_FILENO, minter, r);

	if(o == -1 || r == -1 || w == -1|| w != r)
	{
		free(buffer);
		return 0;
	}

	free(buffer);
	close(o);

	return (w);
}
