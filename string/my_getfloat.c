/*
** my_getfloat.c for Lib in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Wed May 17 13:22:24 2017 Jean Pignouf
** Last update Wed May 17 13:22:49 2017 
*/

#include "ratlib.h"

float		my_getfloat(char *str)
{
  int count;

  if (fdinstr('.', str) == -1)
    return ((float)my_getnbr(str));
  count = -1;
  while (str[++count])
    my_putchar(str[count]);
  return (42.0);
}
