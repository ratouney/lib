/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 10:01:35 2017 
*/

#include <stdlib.h>
#include <unistd.h>
#include "calib.h"

char	*calib_stcl(char *str, int from, int to, int mode)
{
  int	count;
  int	min;
  int	max;
  char	*new;

  if (to <= from && to != 0)
    return (NULL);
  min = (from >= 0 ? from : 0);
  if (to == 0)
    max = calib_strlen(str);
  else
    max = (to <= calib_strlen(str) ? to : calib_strlen(str));
  if ((new = malloc(sizeof(char) * (max - min + 2))) ==  NULL)
    return (NULL);
  count = -1;
  while (++count + min < max)
    new[count] = str[count + min];
  new[count] = '\0';
  if (mode == 1)
    free(str);
  return (new);
}

int	calib_countsep(char *str, char sep)
{
  int	total;
  int	count;

  count = 0;
  total = 0;
  while (str[count] != '\0')
    {
      if (str[count] == sep)
	total++;
      count++;
    }
  return (total);
}

t_charray	*calib_fromstr(char *str, char sep)
{
  t_charray	*data;
  int		size;
  int		count;
  int		start;
  int		cunt;

  size = calib_countsep(str, sep);
  data = newcharray(size + 1);
  count = 0;
  cunt = 0;
  while (str[count] != '\0')
    {
      start = count;
      while (str[count] && str[count] != sep)
	count++;
      data->data[cunt] = calib_stcl(str, start, count, 0);
      if (str[count] != '\0')
	count++;
    }
  return (data);
}
