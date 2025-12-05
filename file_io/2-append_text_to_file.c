#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, nbwritten, i = 0;
size_t size;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL && fd >= 0)
{
close(fd);
return (1);
}
else
{
while (text_content[i] != '\0')
{
i++;
}
size = i;
nbwritten = write(fd, text_content, size);
if (nbwritten == i)
{
close(fd);
return (1);
}
else
{
close(fd);
return (-1);
}
}
}
