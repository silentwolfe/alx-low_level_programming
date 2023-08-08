#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFSIZE 1024

/**
 * read_textfile - This function reads the contents of a textfile
 * @filename: The file to be read
 * @letters: The amount of characters stored
 * Return: Return the actual numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t read_text;
	char buffer[BUFFSIZE];
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
	write(STDOUT_FILENO, buffer, print_len);

	close(file_des);
	return (print_len);
}

