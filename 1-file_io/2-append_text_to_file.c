#include <string.h>
#include "main.h"

/**
 * append_text_to_file - This function appends text to the end of a file
 * @filename: The file name to which text will be appended
 * @text_content: The text to append to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t content_len;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		file_desc = open(filename, O_WRONLY | O_APPEND);

		if (file_desc == -1)
		{
			return (-1);
		}

		content_len = strlen(text_content);
		write_result = write(file_desc, text_content, content_len);

		if (write_result != content_len)
		{
			close(file_desc);
			return (-1);
		}

		close(file_desc);
		return (1);
	}

	return (1);
}

