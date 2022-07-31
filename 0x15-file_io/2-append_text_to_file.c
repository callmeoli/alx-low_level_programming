#include "main.h"
#include <stdlib.h>
/**
* append_text_to_file - append text to file
* @filename: file to be edited
* @text_content: text content
* Return: amount of appended text
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, ap;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
		for (i = 0; text_content[i] != '\0'; i++)
			;
	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		ap = write(fd, text_content, i);
		if (ap == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
