/*
** my_strcmp.c for my_strcmp in /home/ratouney/lib/v2/string
**
** Made by
** Login   <maxime.de-la-fouchardiere@epitech.eu>
**
** Started on  Mon Mar 20 16:48:20 2017
** Last update	Wed Apr 05 10:53:33 2017 Full Name
*/

#include <unistd.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i += 1;
    }
  return (s1[i] - s2[i]);
}
