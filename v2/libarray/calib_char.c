/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Fri Mar 31 10:03:20 2017 
*/

#include <unistd.h>
#include "calib.h"

void	calib_char(char c)
{
  write(2, &c, 1);
}
