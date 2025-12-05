#include "main.h"
/**
 * read_textfile - read a text file and prints
 * @filename : file to read and print
 * @letters: nb of letters to read and print
 * Return: nb of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
void *buf;
int fd, nbread, nbwrite;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(letters);
if (buf == NULL)
return (0);
nbread = read(fd, buf, letters);
if (nbread <= 0)
{
close(fd);
free(buf);
return (0);
}
nbwrite = write(STDOUT_FILENO, buf, nbread);
if (nbwrite != nbread)
{
close(fd);
free(buf);
return (0);
}
close(fd);
free(buf);
return (nbwrite);
}
