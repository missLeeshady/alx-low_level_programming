#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: pointer to filename
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and write
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt, r, w;
	char *buf;

	if (filename == NULL)
	return (0);

	txt = open(filename, O_RDONLY);

	if (txt == -1)
	return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
	return (0);

	r = read(txt, buf, letters);

	if (r == -1)
	return (0);

	buf[letters] = '\0';

	w = write(1, buf, r);

	if (w == -1)
	return (0);

	close(txt);
	free(buf);
	return (w);
}
