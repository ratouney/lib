/*
** my_nbrlen.c for my_nbrlen in /home/arthur/delivery/CPE/CPE_2016_Lemin/ratlib/string
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Mon Apr 10 22:08:13 2017 Arthur Knoepflin
** Last update Mon Apr 10 22:09:27 2017 Arthur Knoepflin
*/

#include "ratlib.h"

int	my_nbrlen(int nbr)
{
  int	count;

  count = 0;
  if (nbr < 0)
    nbr *= -1;
  while (nbr > 0)
    {
      nbr /= 10;
      count++;
    }
  return (count);
}
