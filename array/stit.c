/*
** stit.c for Ratlib in /home/ratouney/lib/array
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Wed Apr 12 19:17:24 2017 
** Last update Wed Apr 12 19:26:40 2017 
*/

#include <stdlib.h>
#include "ratlib.h"

int	*stit(char *str, int *size, char sep, int mode)
{
  int	*data;
  int	count;
  int	cunt;
  int	start;
  char	*temp;

  data = malloc(sizeof(int) * (stwt_cs(str, sep) + 1));
  count = 0;
  cunt = 0;
  while (str[count])
    {
      start = count;
      while (str[count] && str[count] != sep)
	count++;
      temp = stcl(str, start, count, 0);
      data[cunt] = my_getnbr(temp);
      free(temp);
      cunt++;
      if (str[count])
      count++;
    }
  (*size) = cunt;
  if (mode == 1)
    free(str);
  return (data);
}
