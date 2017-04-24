/*
** stwt.c for LibRat in /home/ratouney/lib/array
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Wed Apr 12 19:00:09 2017 
** Last update Wed Apr 12 19:07:20 2017 
*/

#include <stdlib.h>
#include "ratlib.h"

int	stwt_cs(char *str, char sep)
{
  int	count;
  int	total;

  total = 0;
  count = -1;
  while (str[++count])
    if (str[count] == sep)
      total++;
  return (total);
}

char	**stwt(char *str, char sep, int mode)
{
  char	**data;
  int	count;
  int	start;
  int	cunt;

  data = malloc(sizeof(char *) * (stwt_cs(str, sep) + 2));
  count = 0;
  cunt = 0;
  while (str[count])
    {
      start = count;
      while (str[count] && str[count] != sep)
	count++;
      data[cunt] = stcl(str, start, count, 0);
      cunt++;
      if (str[count])
	count++;
    }
  data[cunt] = NULL;
  if (mode == 1)
    free(str);
  return (data);
}
