/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 10:02:57 2017 
*/

#include <unistd.h>
#include "calib.h"

int	calib_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    count++;
  return (count);
}

void	calib_show(t_charray *data)
{
  int	i;

  i = 0;
  write(2, "[Content of Charray]\nStatus : [", 31);
  write(2, data->fill, calib_strlen(data->fill));
  write(2, "]\n\n", 3);
  while (i < data->size)
    {
      if (data->fill[i] == '1')
        {
	  write(2, "\t[", 2);
	  calib_nbr(i);
	  write(2, "] = [", 5);
	  write(2, data->data[i], calib_strlen(data->data[i]));
	  write(2, "]\n", 2);
        }
      else
        {
	  write(2, "\t[", 2);
	  calib_nbr(i);
	  write(2, "] = Undefined\n", 14);
        }
      i++;
    }
  write(2, "[End of Array]\n", 15);
}
