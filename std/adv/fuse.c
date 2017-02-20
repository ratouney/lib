/*
** my_strlen.c for my_strlen.c in /home/ratouney/CPool_Day04
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include "stdrat_adv.h"

char *fuse(char *str, char *str1, int mode)
{
  int count;
  int cunt;
  char *new;

  new = malloc(sizeof(char) * (my_strlen(str) + my_strlen(str1) + 1));
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