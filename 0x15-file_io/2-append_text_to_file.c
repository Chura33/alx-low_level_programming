#include <stdio.h>
#include "main.h"

/**
* append_text_to_file - adds text at end of a file
* @filename: name of the file
* @text_content: a pointer tothe string to add at the end
* Return: returns and intger
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; )
		{
			length++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
