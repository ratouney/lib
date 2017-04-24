/*
** nb_args.c for nb_args in /home/arthur/delivery/CPE/CPE_2016_Lemin
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Fri Apr  7 11:07:45 2017 Arthur Knoepflin
** Last update Mon Apr 10 18:53:39 2017 Arthur Knoepflin
*/

int	nb_args(char **tab)
{
  int	i;

  i = -1;
  while (tab && tab[++i]);
  return ((tab) ? i : 0);
}
