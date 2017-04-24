/*
** calib_select.c for calib in /home/ratouney/lib/libarray
**
** Made by
** Login   <ratouney>
**
** Started on  Fri Mar 31 17:10:08 2017
** Last update	Wed Apr 05 10:51:46 2017 Full Name
*/

#include <stdlib.h>
#include "calib.h"

t_charray	*calib_select(t_charray *data, int from, int to, int mode)
{
  t_charray	*new;
  int		count;

  new = newcharray(0);
  count = from;
  while (count < to)
    {
      new = calib_add(new, data->data[count], -1, 0);
      count++;
    }
  if (mode == 1)
    destroy_charray(data);
  return (new);
}
