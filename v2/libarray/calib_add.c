/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 09:59:38 2017 
*/

#include <unistd.h>
#include <stdlib.h>
#include "calib.h"

t_charray	*calib_add_inter(t_charray *data, char **new, char *nf)
{
  t_charray	*newdata;

  if ((newdata = malloc(sizeof(t_charray))) == NULL)
    return (NULL);
  newdata->data = new;
  newdata->fill = nf;
  newdata->size = data->size + 1;
  destroy_charray(data);
  return (newdata);
}

t_charray	*calib_add_mid(t_charray *data, char *str, int pos)
{
  char		**new;
  char		*nf;
  int		i;
  int		mod;

  i = -1;
  mod = 0;
  new = charray(data->size + 1);
  nf = fillgen(data->size + 1);
  while (++i + mod < data->size + mod)
    {
      if (mod == 0 && i == pos && (mod = 1))
        {
	  new[i] = stp(str, 0) + (nf[i] = '1') * 0;
	  if (data->fill[i] == '1')
	    new[i + mod] = stp(data->data[i], 0) + (nf[i + mod] = '1') * 0;
	  else
	    new[i + mod] = NULL + (nf[i + mod] = '0') * 0;
        }
      else if (data->fill[i] == '1')
	new[i + mod] = stp(data->data[i], 0) + (nf[i + mod] = '1') * 0;
      else
	new[i + mod] = NULL + (nf[i + mod] = '0') * 0;
    }
  return (calib_add_inter(data, new, nf));
}

t_charray	*calib_add_end(t_charray *data, char *str)
{
  char		**new;
  char		*nf;
  int		i;

  new = charray(data->size + 1);
  nf = fillgen(data->size + 1);
  i = -1;
  while (++i < data->size)
    {
      if (data->fill[i] == '1')
	new[i] = stp(data->data[i], 0) + (nf[i] = '1') * 0;
      else
	new[i] = NULL + (nf[i] = '0') * 0;
    }
  if (str == NULL)
    new[i] = NULL + (nf[i] = '0') * 0;
  else
    new[i] = stp(str, 0) + (nf[i] = '1') * 0;
  return (calib_add_inter(data, new, nf));
}

t_charray	*calib_add(t_charray *data, char *str, int pos, int mode)
{
  mode = mode;
  if (pos >= 0)
    return (calib_add_mid(data, str, pos));
  if (pos == -1)
    return (calib_add_end(data, str));
  return (NULL);
}
