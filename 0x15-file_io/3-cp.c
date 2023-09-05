#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - This function has the property of copying the
 * content of one file to another file
 * @argc: The argument count
 * @argv: The argument vector
 * Return: returns 0 at the end of the program
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	ssize_t nread, nwritten;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);

		if (nwritten == -1)
		{
			fprintf(stderr, "Error: Can't write to  %s\n", file_to);
			exit(99);
		}
		if (nwritten != nread)
		{
			fprintf(stderr, "Error: Write operation incomplete\n");
			exit(99);
		}
	}

	if (nread == -1)
	{
		fprintf(stderr, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
