#include <sys/stat.h>
#include "main.h"

/**
 * create_file - This function creates a new file
 * @filename: The file name created
 * @text_content: This is the contents embedded in the file
 * Return: return 1 as success and a negative number as a failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t content_len;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		content_len = 0;

		while (text_content[content_len] != '\0')
		{
			content_len++;
		}

		write_result = write(file_desc, text_content, content_len);

		if (write_result == -1 || write_result != content_len)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
