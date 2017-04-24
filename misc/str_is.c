/*
** str_is.c for lib in /home/ratouney/lib/v2/misc
**
** Made by
** Login   <ratouney>
**
** Started on  Fri Mar 31 15:20:32 2017
** Last update	Wed Apr 05 10:52:28 2017 Full Name
*/

#include <unistd.h>
#include "ratlib.h"

int	str_islow(char *str)
{
  int	count;

  if (str == NULL)
    return (0);
  count = 0;
  while (str[count])
    {
      if (char_islow(str[count]) != 1)
	return (0);
      count++;
    }
  return (1);
}

int	str_isupp(char *str)
{
  int	count;

  if (str == NULL)
    return (0);
  count = 0;
  while (str[count])
    {
      if (char_isupp(str[count]) != 1)
	return (0);
      count++;
    }
  return (1);
}

int	str_isnum(char *str)
{
  int	count;

  if (str == NULL)
    return (0);
  count = 0;
  while (str[count])
    {
      if (char_isnum(str[count]) != 1)
	return (0);
      count++;
    }
  return (1);
}

int	str_isalpha(char *str)
{
  int	count;

  if (str == NULL)
    return (0);
  count = 0;
  while (str[count])
    {
      if (char_isalpha(str[count]) != 1)
	return (0);
      count++;
    }
  return (1);
}

int	str_isalphanum(char *str)
{
  int	count;

  if (str == NULL)
    return (0);
  count = 0;
  while (str[count])
    {
      if (char_isalphanum(str[count]) != 1)
	return (0);
      count++;
    }
  return (1);
}
