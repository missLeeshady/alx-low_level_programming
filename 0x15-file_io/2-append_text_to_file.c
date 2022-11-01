#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: is the NULL terminated string added at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int txt, w, i = 0;

	if (filename == NULL)
	return (-1);

	txt = open(filename, O_RDWR | O_APPEND);

	if (txt == -1)
	return (-1);
	while (text_content[i])
	i++;
	if (text_content == NULL)
	{
	close(txt);
	return (1);
	}
	else
	{
	w = write(txt, text_content, i);
	}
	if (w == -1)
	return (-1);
	close(txt);
	return (1);
}
