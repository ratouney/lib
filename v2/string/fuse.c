/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:09:29 2017 
** Last update Tue Mar 28 19:00:00 2017 
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
