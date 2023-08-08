#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - This function creates a new file
 * @filename: The file name created
 * @text_content: This is the contents embedded in the file
 * Return: return 1 as success and a negative number as a failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t content_len;
	ssize_t write_result;
	int file_desc;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		content_len = strlen(text_content);
		write_result = write(file_desc, text_content, content_len);
		if (write_result != content_len)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
