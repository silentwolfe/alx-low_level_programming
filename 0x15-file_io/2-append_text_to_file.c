#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: The file where appending takes place
 * @text_content: This is the contents embedded in the file
 * Return: return 1 as success and a negative number as a failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;

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

		ssize_t content_len = strlen(text_content);
		ssize_t write_result = write(file_desc, text_content, content_len);

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
