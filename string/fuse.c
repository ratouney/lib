/*
** fuse.c for lib in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Fri Mar 31 15:58:08 2017 
** Last update Fri Mar 31 15:58:10 2017 
*/

#include <stdlib.h>
#include "ratlib.h"

char	*fuse(char *str, char *str1, int mode)
{
  int	count;
  int	cunt;
  char	*new;

  if ((new = malloc(sizeof(char) *
		    (my_strlen(str) + my_strlen(str1) + 1))) == NULL)
    return (NULL);
  count = -1;
  while (++count < my_strlen(str))
    new[count] = str[count];
  cunt = -1;
  while (++cunt < my_strlen(str1))
    new[count + cunt] = str1[cunt];
  new[count + cunt] = '\0';
  if (mode == 1)
    free(str);
  else if (mode == 2)
    free(str1);
  else if (mode == 3)
    {
      free(str);
      free(str1);
    }
  return (new);
}
