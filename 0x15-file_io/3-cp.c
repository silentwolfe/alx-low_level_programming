#include "main.h"

/**
 * main - This function copies the contents of one file to another file
 * @ac: The argument counter
 * @av: The argument vector
 * Return: 0 as success
 */

int main(int ac, char **av)
{
	int src, dest;
	char buffer[BUFSIZE];
	ssize_t n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY);

	if (src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 664);

	if (dest == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}

	while ((n = read(src, buffer, sizeof(buffer))) > 0)
	{
		if (write(dest, buffer, n) != n)
		{
			perror("Write error");
			close(src);
			close(dest);
			return (1);
		}
	}

	if (n == -1)
	{
		perror("Read error");
		close(src);
		close(dest);
		return (1);
	}

	close(src);
	close(dest);

	if (chmod(av[2], 0664) == -1)
	{
		perror("Chmod error");
		return (-1);
	}

	printf("File transfer successful\n");
	return (0);
}

