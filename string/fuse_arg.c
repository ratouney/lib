/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
**
** Made by
** Login   <maxime.de-la-fouchardiere@epitech.eu>
**
** Started on  Mon Mar 20 17:09:29 2017
** Last update	Wed Apr 05 10:52:48 2017 Full Name
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "ratlib.h"

char		*fuse_arg(char *str, ...)
{
  va_list	list;
  int		i;
  char		*buf;
  char		*rt;
  void		*prev;

  i = -1;
  prev = NULL;
  rt = NULL;
  va_start(list, str);
  while (str[++i] != '\0')
    {
      if (str[i] == 's' && (prev = va_arg(list, char *)))
	rt = (rt == NULL ? stcl(prev, 0, 0, 0) : fuse(rt, prev, 1));
      else if (str[i] == 'c' && (buf = chtost(prev = va_arg(list, int))))
	rt = (rt == NULL ? stcl(buf, 0, 0, 0) : fuse(rt, buf, 3));
      else if (str[i] == 'd' && (buf = nbtost(prev = va_arg(list, int))))
	rt = (rt == NULL ? stcl(buf, 0, 0, 0) : fuse(rt, buf, 3));
      else if (str[i] == ':' && prev != NULL)
	free(prev);
    }
  va_end(list);
  return (rt);
}
