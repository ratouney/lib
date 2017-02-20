/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Dec 11 11:45:49 2016 John Doe
*/

#include "stdrat_basic.h"

int	my_strlen(char *str)
{
  int i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}