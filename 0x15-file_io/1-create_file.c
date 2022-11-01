#include "main.h"

/**
* create_file - it creates a file
* @filename: name of the file to create
* @text_content: is a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int txt, i = 0;

	if (filename == NULL)
	return (-1);

	txt = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (txt == -1)
	return (-1);
	while (text_content[i])
	i++;
	if (text_content == NULL)
	{
	close(txt);
	return (-1);
	}
	else
	{
	write(txt, text_content, i);
	}
	close(txt);
	return (1);
}
