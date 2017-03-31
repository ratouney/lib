/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 09:59:57 2017 
*/

#include <stdlib.h>
#include <unistd.h>
#include "calib.h"

t_charray	*calib_copy(t_charray *data)
{
  int		count;
  t_charray	*new;

  if ((new = malloc(sizeof(t_charray))) == NULL)
    return (NULL);
  new->data = charray(data->size);
  new->fill = fillgen(data->size);
  new->size = data->size;
  count = 0;
  while (count < data->size)
    {
      if (data->fill[count] == '1')
        {
	  new->data[count] = stp(data->data[count], 0);
	  new->fill[count] = '1';
        }
      else
        {
	  new->data[count] = NULL;
	  new->fill[count] = '0';
        }
      count++;
    }
  return (new);
}
