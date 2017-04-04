/*
** loadfile_utils.c for LoadFile in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Mon Apr  3 19:55:49 2017 
** Last update Mon Apr  3 20:18:28 2017 
*/

#include <stdlib.h>
#include <unistd.h>
#include "loadfile.h"
#include "ratlib.h"

void	 loadfile_destroy(t_content data)
{
  int	count;

  count = -1;
  while (data.line[++count] != NULL)
    free(data.line[count]);
  free(data.line);
  free(data.raw);
  close(data.fd);
}

void	loadfile_show(t_content data)
{
  int	count;

  if (data.errno != 0)
    {
      my_putstr("Errno : [");
      my_putnbr(data.errno);
      my_putstr("]\nCheck the failure...\n");
      return ;
    }
  count = 0;
  while (data.line[count] != NULL)
    {
      my_putnbr(count);
      my_putstr(" == ");
      my_putstr(data.line[count]);
      my_putchar('\n');
      count++;
    }
  my_putstr("\nTotal Size : [");
  my_putnbr(data.size);
  my_putstr("]\n");
}

void	loadfile_showerr(t_content data)
{
  if (data.errno == 1)
    {
      write(2, "[ERRNO == 1]", 12);
      write(2, "Could not open file at given path\n", 34);
    }
  if (data.errno == 2)
    {
      write(2, "[ERRNO == 2]", 12);
      write(2, "Reading and buffering raw text file has failed\n", 47);
    }
  if (data.errno == 3)
    {
      write(2, "[ERRNO == 3]", 12);
      write(2, "No separators founds, aborting array generation\n", 48);
    }
  if (data.errno == 4)
    {
      write(2, "[ERRNO == 4]", 12);
      write(2, "Memory allocation for the array failed\n", 39);
    }
}
