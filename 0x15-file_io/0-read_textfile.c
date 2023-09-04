#include "main.h"

/**
 * read_textfile - This function reads the content of a file passed
 * in as an argument and writes it to the STDOUT_FILENO(standard output)
 * @filename: The file from which the content is read from
 * @letters: The number of letters to read in the particular file
 * Return: returns the number of printed text from the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[BUFFSIZE];
	int file_des;
	ssize_t read_text;
	ssize_t bytes_written;
	ssize_t print_len;


	if (filename == NULL)
	{
		return (0);
	}

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
	{
		return (0);
	}

	read_text = read(file_des, buffer, sizeof(buffer));

	if (read_text == -1)
	{
		close(file_des);
		return (0);
	}

	print_len = ((ssize_t)letters < read_text) ? (ssize_t)letters : read_text;
	bytes_written = write(STDOUT_FILENO, buffer, print_len);

	if (bytes_written == -1 || bytes_written != print_len)
	{
		return (0);
	}

	close(file_des);
	return (print_len);
}
