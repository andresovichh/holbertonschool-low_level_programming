#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to w to file
 * Return: Always 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	/** check if filename exists and truncate*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (!fd)
		return (-1);

	if (text_content)
	{
		/** measure string */
		while (text_content[len])
			len++;

		/** actually write */
		w = write(fd, text_content, len);
		if (w != len)
			return (-1);


	}
	close(fd);

	return (0);




}
