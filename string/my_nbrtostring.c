/*
** my_nbrtostring.c for my_nbrtostring in arthur/CPE_2016_Lemin/ratlib/string
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Mon Apr 10 22:20:23 2017 Arthur Knoepflin
** Last update Mon Apr 10 22:26:44 2017 Arthur Knoepflin
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
