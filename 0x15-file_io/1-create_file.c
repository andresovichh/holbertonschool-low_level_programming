#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to w to file
 * Return: Always 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	unsigned int len = 0;

	while (text_content)
		len++;

	/** check if filename exists and truncate*/
	if (filename)
	{
		fd = open(filename, O_TRUNC);
		w = write(fd, text_content, len);
		close(fd);
		close(w);
	}
	else if (filename == NULL)
	{
		return (-1);
	}
	else if (!filename)
	{
		fd =








}
