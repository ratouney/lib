/*
** my_putstr.c for my_putstr in /home/ratouney/lib/v2/string
**
** Made by
** Login   <maxime.de-la-fouchardiere@epitech.eu>
**
** Started on  Mon Mar 20 16:22:49 2017
** Last update	Wed Apr 05 10:53:29 2017 Full Name
*/

#include <unistd.h>
#include "ratlib.h"

int	my_putstr(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      my_putchar(str[count]);
      count++;
    }
  return (count);
}

int	my_putstr_fd(int fd, char *str)
{
  int	count;

  count = 0;
  if (str == NULL || str[0] == '\0')
    return (0);
  while (str[count] != '\0')
    {
      if (my_putchar_fd(fd, str[count]) == -1)
	return (-1);
      count++;
    }
  return (count);
}
