#include "main.h"

/**
 * append_text_to_file - This function appends a text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: The string to be added to the end of the file
 * Return: -1 if function fails or filename is NULL
 *	-1 if the file does not exist or the user lacks permission to write
 *	1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[0];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
