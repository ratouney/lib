/*
** free_tab.c for lib in /home/ratouney/CPE/CPE_2016_Lemin
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Wed Apr  5 12:42:56 2017 
** Last update Wed Apr  5 12:43:50 2017 
*/

#include <stdlib.h>

void	free_tab(char **tab)
{
  int	count;

  count = 0;
  while (tab[count] != NULL)
    {
      free(tab[count]);
      count++;
    }
  free(tab);
}
