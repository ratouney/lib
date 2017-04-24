/*
** stcl.c for stcl in /home/arthur/delivery/CPE/CPE_2016_Lemin/ratlib/string
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Mon Apr 10 22:27:59 2017 Arthur Knoepflin
** Last update Mon Apr 10 22:31:35 2017 Arthur Knoepflin
*/

#include <stdlib.h>
#include "ratlib.h"

char	*stcl(char *str, int from, int to, int mode)
{
  int	count;
  int	min;
  int	max;
  char	*new;

  if (to <= from && to != 0)
    return (NULL);
  min = (from >= 0 ? from : 0);
  if (to == 0)
    max = my_strlen(str);
  else
    max = (to <= my_strlen(str) ? to : my_strlen(str));
  if ((new = malloc(sizeof(char) * (max - min + 2))) == NULL)
    return (NULL);
  count = -1;
  while (++count + min < max)
    new[count] = str[count + min];
  new[count] = '\0';
  if (mode == 1)
    free(str);
  return (new);
}
