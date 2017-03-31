/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 10:03:07 2017 
*/

#include <stdlib.h>
#include "calib.h"

t_charray	*newcharray(int size)
{
  t_charray	*new;

  if ((new = malloc(sizeof(t_charray))) == NULL)
    return (NULL);
  if ((new->data = charray(size)) == NULL)
    {
      free(new);
      return (NULL);
    }
  if ((new->fill = fillgen(size)) == NULL)
    {
      free(new->data);
      free(new);
      return (NULL);
    }
  new->size = size;
  return (new);
}
