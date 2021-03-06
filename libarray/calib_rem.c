/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update	Wed Apr 05 10:51:41 2017 Full Name
*/

#include <stdlib.h>
#include "calib.h"

t_charray	*calib_rem_inter(t_charray *data, char **new, char *nf)
{
  t_charray	*newdata;

  if ((newdata = malloc(sizeof(t_charray))) == NULL)
    return (NULL);
  newdata->size = data->size - 1;
  newdata->data = new;
  newdata->fill = nf;
  destroy_charray(data);
  return (newdata);
}

t_charray	*calib_rem(t_charray *data, int pos, int mode)
{
  char		**new;
  char		*nf;
  int		i;
  int		mod;

  new = charray(data->size - 1);
  mode = mode;
  nf = fillgen(data->size - 1);
  i = -1;
  mod = 0;
  while (++i + mod < data->size + mod)
    {
      if (i == pos && mod == 0)
	mod = 1;
      else if (data->fill[i] == '1')
	new[i - mod] = stp(data->data[i], 0) + (nf[i - mod] = '1') * 0;
      else
	new[i - mod] = NULL + (nf[i - mod] = '0') * 0;
    }
  return (calib_rem_inter(data, new, nf));
}
