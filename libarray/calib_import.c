/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 10:03:32 2017 
*/

#include <stdio.h>
#include <stdlib.h>
#include "calib.h"

t_charray	*calib_import(char **data, int given)
{
  t_charray	*new;
  int		size;
  int		i;

  if (given != -1 && given >= 0)
    size = given;
  else
    {
      i = -1;
      while (data[++i] != NULL)
	;
      size = i;
    }
  if ((new = malloc(sizeof(t_charray))) == NULL)
    return (NULL);
  new->data = charray(size);
  new->fill = fillgen(size);
  new->size = size;
  i = 0;
  while (i < size)
    {
      new->data[i] = stp(data[i], 0) + (new->fill[i] = '1') * 0;
      i++;
    }
  return (new);
}
