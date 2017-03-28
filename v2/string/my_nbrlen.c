/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:09:29 2017 
** Last update Tue Mar 28 19:00:40 2017 
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
