/*
** my_nbrlen.c for PSU_2016_my_printf in /home/ratouney/PSU_2016_my_printf
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Nov 17 07:37:19 2016 ratouney
** Last update Thu Nov 17 07:37:23 2016 John Doe
*/

#include "stdrat_basic.h"

int			my_nbrlen(int a)
{
  int count;

  count = 0;
  if (a < 0)
  {
    a *= -1;
    count++;
  }
  while (a > 0)
  {
    a = a / 10;
    count++;
  }
  return (count);
}
