/*
** main.c for smdlfksmdlf in /home/ratouney/lib/v2
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 16:36:06 2017 
** Last update Mon Mar 20 16:59:42 2017 
*/

#include "ratlib.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  if (argv[1] == NULL)
    exit(11);
  int fd = open(argv[1], O_WRONLY | O_CREAT);
  int a = 42;
  int b = -456;

  my_putnbr_fd(fd ,a);
  close(fd);
}
