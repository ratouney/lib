/*
** my_memset.c for my_memset in /home/arthur/delivery/CPE/CPE_2016_Lemin
** 
** Made by Arthur Knoepflin
** Login   <arthur.knoepflin@epitech.eu>
** 
** Started on  Fri Apr 28 15:32:47 2017 Arthur Knoepflin
** Last update Fri Apr 28 16:45:11 2017 Arthur Knoepflin
*/

void	my_memset_i(int *tab, int c, int len)
{
  int	i;

  i = 0;
  while (i < len)
    {
      tab[i] = c;
      i += 1;
    }
}
