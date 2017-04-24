/*
** my_putchar.c for my_putchar in /home/ratouney/lib/v2/string
**
** Made by
** Login   <maxime.de-la-fouchardiere@epitech.eu>
**
** Started on  Mon Mar 20 16:18:08 2017
** Last update	Wed Apr 05 10:53:19 2017 Full Name
*/

#include <unistd.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  else
    return (1);
}

int	my_putchar_fd(int fd, char c)
{
  if (write(fd, &c, 1) == -1)
    return (-1);
  else
    return (1);
}
