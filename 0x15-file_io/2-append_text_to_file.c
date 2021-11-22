#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: Filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{


	int fd, len = 0, w = 0;

	/** check if filename exists*/
	if (!filename)
		return (-1);
	/** OPEN, READ ONLY AND APPEND*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (!fd)
		return (-1);

	/** if text_content  exists, measure its length*/

	if (text_content)
	{
		while (text_content[len])
			len++;

		w = write(fd, text_content, len);
		if (w != len)
			return (-1);
	}
	/** then close the file*/

	close(fd);

	return (1);
}
