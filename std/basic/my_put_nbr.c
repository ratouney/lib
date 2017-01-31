/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Dec 11 11:45:49 2016 John Doe
*/

#include "rtlib.h"

int	rec_my_put_nbr(int nb)
{
  if (nb <= 9)
    {
      my_putchar('0' + nb);
    }
  else
    {
      my_put_nbr(nb / 10);
      my_putchar ('0' + (nb % 10));
    }
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  rec_my_put_nbr(nb);
}
