/*
** my_strlen.c for my_strlen in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 16:16:56 2017 
** Last update Mon Apr  3 20:20:35 2017 
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  if (str == NULL)
    return (0);
  while (str[count] != '\0')
    count++;
  return (count);
}
