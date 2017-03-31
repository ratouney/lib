/*
** my_gayificator.c for lib in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Fri Mar 31 10:13:50 2017 
** Last update Fri Mar 31 12:54:37 2017 
*/

#include <unistd.h>
#include <fcntl.h>

void	my_gayificator_rand()
{
  char c;
  int ran;

  write(1, "\e[3", 3);
  ran = rand() % 10;
  c = (ran) + '0';
  write(1, &c, 1);
  write(1, "m", 1);
}

void	my_gayificator(char *str)
{
  int count;

  count = 0;
  srand(getpid());
  while (str[count])
    {
      my_gayificator_rand();
      write(1, &str[count], 1);
      count++;
    }
  write(1, "\e[39m", 5);
}
