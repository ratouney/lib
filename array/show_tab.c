/*
** show_tab.c for array in /home/ratouney/lib/array
**
** Made by
** Login   <ratouney>
**
** Started on  Mon Apr  3 20:46:03 2017
** Last update	Mon Apr 24 09:49:26 2017 Full Name
*/

#include <unistd.h>
#include "ratlib.h"

void	show_tab(char **tab, int fd)
{
  int	count;

  count = 0;
  while (tab[count] != NULL)
    {
      my_putstr_fd(fd, tab[count]);
      write(fd, "\n", 1);
      count++;
    }
}

void	show_array(int *tab, int size, int fd)
{
  int	count;

  count = 0;
  while (count < size)
    {
      my_putnbr_fd(fd, tab[count]);
      write(fd, "\n", 1);
      count++;
    }
}
