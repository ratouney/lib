/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Fri Mar 31 10:00:27 2017 
*/

#include <stdlib.h>
#include "calib.h"

char	**charray(int size)
{
  char	**new;

  if ((new = malloc(sizeof(char *) * (size + 1))) == NULL)
    return (NULL);
  new[size] = NULL;
  return (new);
}
