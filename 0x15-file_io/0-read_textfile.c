#include "main.h"

/**
 * read_textfile - reads a text file and prts to POSIX stodut
 * @filename: filename
 * @letters: nbr of letters to read and prt
 * Return: Actual nbr of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf;
	size_t r, w;

	/**
	 * first, I set the File Descriptor.
	 */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	/** Read the file*/
	r = read(fd, buf, letters);
	/** print whatever it read*/

	w = write(STDOUT_FILENO, buf, r);

	/** then close what you opened*/

	close(fd);

	/** then free mem*/

	free(buf);

	return (w);
return (0);
}
