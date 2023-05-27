#include "main.h"

/**
* create_file - creates a new file
* @filename:  the pointer to the  name of the file to create
* @text_content: the pointer to the string to write inside the file
* Return: returns an int
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; )
			length++;
	}

	o = open(filename, O_CREAT |O_RDWR |O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (1);
	close(o);
	return (1);
}
