/*
** fdinstr.c for fdinstr.c in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:05:08 2017 
** Last update Mon Mar 20 17:07:44 2017 
*/

#include <unistd.h>

int	fdinstr(char tofind, char *str)
{
  int count;

  count = 0;
  if (str == NULL)
    return (-2);
  while (str[count] != '\0')
    {
      if (str[count] == tofind)
	return (count);
      count++;
    }
  return (-1);
}
