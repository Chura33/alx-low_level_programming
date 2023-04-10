#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* read_textfile - reads text in a file
* @filename: name of file to be read
* @letters: the number of letters to be read
* Return: returns the number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, o, r;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
