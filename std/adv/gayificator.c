/*
** gaypower.c for skldfjsdlkfjd in /home/ratouney
** 
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
** 
** Started on  Wed Oct 19 12:47:00 2016 ratouney ratouney
** Last update Wed Oct 19 13:17:03 2016 ratouney ratouney
*/

#include <stdlib.h>

void	gayificator(char *str)
{
  int	i;
  int	incre_rb;
  char	**char_color;

  i = -1;
  incre_rb = 0;
  char_color = malloc(sizeof(char) * 8);
  while (++i != 5)
    char_color[i] = malloc(sizeof(char) * 5);
  char_color[0] = "\x1B[31m";
  char_color[1] = "\x1B[32m";
  char_color[2] = "\x1B[33m";
  char_color[3] = "\x1B[34m";
  char_color[4] = "\x1B[35m";
  char_color[5] = "\x1B[36m";
  i = -1;
  while (str[++i] != '\0')
    {
      my_putstr(char_color[incre_rb]);
      my_putchar(str[i]);
      incre_rb = incre_rb + 1;
      if (incre_rb == 7)
	incre_rb = 0;
    }
  my_putstr("\x1B[0m");
}