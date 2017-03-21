/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Mon Mar 20 16:45:38 2017 
*/

#include "ratlib.h"

void	my_rec_putnbr(int nb)
{
  if (nb <= 9)
      my_putchar('0' + nb);
  else
    {
      my_rec_putnbr(nb / 10);
      my_putchar ('0' + (nb % 10));
    }
}

void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  my_rec_putnbr(nb);
}


void	my_rec_putnbr_fd(int fd, int nb)
{
  if (nb <= 9)
    my_putchar_fd(fd, '0' + nb);
  else
    {
      my_rec_putnbr_fd(fd, nb / 10);
      my_putchar_fd(fd, '0' + (nb % 10));
    }
}

void	my_putnbr_fd(int fd, int nb)
{
  if (nb < 0)
    {
      my_putchar_fd(fd, '-');
      nb = nb * (-1);
    }
  my_rec_putnbr_fd(fd, nb);
}
