/*
** main.c for msdlfksdmlfksd in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Sat May  6 17:51:11 2017 Jean Pignouf
** Last update Wed May 10 21:38:50 2017 
*/

#include "flemme.h"

int	main(int argc, char **argv)
{
  char **ding;

  ding = my_malloc("array", sizeof(char *) * (3));
  ding[0] = my_malloc("array", sizeof(char) * (4));
  ding[1] = my_malloc("array", sizeof(char) * (4));
  ding[2] = NULL;

  my_free(ding[0]);
  my_free(ding[1]);
  my_free(ding);
  MY_CLEAR();
  return (0);
}
