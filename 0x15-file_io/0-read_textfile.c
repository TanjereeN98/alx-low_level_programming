#include "main.h"
/**
 * read_textfile - function to read file and print
 * @filename: text file that will be read
 * @letters: number of letters
 * Return: number of printed byte or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	size_t descript, red;

	descript = open(filename, O_RDONLY);
	if (descript == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	red = read(descript, ptr, letters);
	return (write(STDOUT_FILENO, ptr, red));
	free(ptr);
	close(descript);
}
