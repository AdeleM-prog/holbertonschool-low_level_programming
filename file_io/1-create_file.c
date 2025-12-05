#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 0 for success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
int file, nbwritten, i = 0;
size_t size;
if (filename == NULL)
return (-1);
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);
if (text_content == NULL)
{
close(file);
return (1);
}
else
{
while (text_content[i] != '\0')
{
i++;
}
size = i;
nbwritten = write(file, text_content, size);
if (nbwritten == size)
{
close(file);
return (1);
}
}
return (-1);
}
