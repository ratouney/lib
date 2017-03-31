/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:09:29 2017 
** Last update Tue Mar 28 19:01:25 2017 
*/

#include <stdlib.h>
#include "ratlib.h"

char	*my_nbrtostring(int nbr)
{
  int	total;
  int	count;
  int	size;
  char	*new;

  if ((new = malloc(sizeof(char) *
		    (my_nbrlen(nbr) + (nbr < 0 ? 1 : 0) + 1))) == NULL)
    return (NULL);
  size = my_nbrlen(nbr) + (nbr < 0 ? 1 : 0);
  new[size] = '\0';
  if (nbr < 0)
    new[0] = '-';
  count = 1;
  total = nbr * (nbr < 0 ? -1 : 1);
  while (total > 0)
    {
      new[size - count] = (total % 10) + '0';
      total /= 10;
      count++;
    }
  return (new);
}

char	*nbtost(int nbr)
{
  return (my_nbrtostring(nbr));
}
