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
  int	count;

  if (s1 == NULL)
    return (-1);
  if (s2 == NULL)
    return (-2);
  if (s1 == NULL && s2 == NULL)
    return (-3);
  count = 0;
  while (s1[count] != '\0' && s2[count] != '\0')
    {
      if (s1[count] == '\0' && s2[count] != '\0')
	return (2);
      else if (s1[count] != '\0' && s2[count] == '\0')
	return (1);
      else if (s1[count] > s2[count])
	return (1);
      else if (s1[count] < s2[count])
	return (2);
      count++;
    }
  return (0);
}
