#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: nb of arguments passed to the function
 * @argv: content of args passed to the function
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
  int i = 0, argc_fail, fd_from, read_fail, read_fail2, fd_to, write_fail, write_fail2, close_fail, close_fail2, close_fail3;
  char *msg1 = "Usage: cp file_from file_to\n";
  char *msg2 = "Error: Can't read from file";
  char *msg3 = "Error: Can't write to";
  char *msg4 = "Error: Can't close fd";
  char *new_line = "\n";
  size_t size;
  ssize_t nbread, nbwrite;
  char buffer[1024];
  if (argc != 3)
    {
      i = 0;
      while (msg1[i] != '\0')
	{
	i++;
    }
      size = i;
      argc_fail = write(STDERR_FILENO, msg1, size);
      exit (97);
}
  fd_from = open(argv[1], O_RDONLY);
    if (fd_from < 0)
      {
	i = 0;
      while (msg2[i] != '\0')
        i++;

      size = i;
      read_fail = write(STDERR_FILENO, msg2, size);
      i = 0;
      while (argv[1][i] != '\0')
        i++;

      size = i;
      read_fail2 = write(STDERR_FILENO, argv[1], size);
      write(STDERR_FILENO, new_line, 1);
      exit(98);
      }
      fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	  {
	    i = 0;
	  while (msg3[i] != '\0')
        i++;
	  
	size = i;
	 write_fail = write(STDERR_FILENO, msg3, size);
	 i = 0;
	 while (argv[2][i] != '\0')
        i++;

      size = i;
      read_fail2 = write(STDERR_FILENO, argv[2], size);
      write(STDERR_FILENO, new_line, 1);
      exit(99);
    }
	nbread = read(fd_from, buffer, 1024);
	while (nbread > 0)
	  {
	    nbwrite = write(fd_to, buffer, 1024);
	    if (nbwrite != nbread)
	      {
	      i = 0;
         while (argv[2][i] != '\0')
        i++;

      size = i;
	      write(STDERR_FILENO, msg3, size);
            write(STDERR_FILENO, argv[2], 1);
            write(STDERR_FILENO, new_line, 1);
	      exit(99);
	  }
	if (close(fd_from) == -1)
	  {
	    i = 0;
	    while (msg4[i] !='\0')
	      i++;
	    size = i;
	    close_fail = write(STDERR_FILENO, msg4, size);
	    dprintf(STDERR_FILENO, "%d\n", fd_from);
	    exit(100);
	  }
	return (0);
}
