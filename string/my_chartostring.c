/*
** my_chartostring.c for my_chartostring in /home/arthur/delivery/CPE/CPE_2016_Lemin/ratlib/string
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Mon Apr 10 21:53:22 2017 Arthur Knoepflin
** Last update Mon Apr 10 21:55:08 2017 Arthur Knoepflin
*/

#include <stdlib.h>
#include "ratlib.h"

char	*my_chartostring(char c)
{
  char	*temp;

  if ((temp = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  temp[0] = c;
  temp[1] = '\0';
  return (temp);
}

char	*chtost(char c)
{
  return (my_chartostring(c));
}
