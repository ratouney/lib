/*
** my_epurstrlen.c for my_epurstrlen in /home/arthur/delivery/CPE/CPE_2016_Lemin
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Wed Apr 12 13:15:59 2017 Arthur Knoepflin
** Last update Wed Apr 12 14:10:03 2017 Arthur Knoepflin
*/

static int	stlen(char *str)
{
  int		i;

  i = -1;
  while (str && str[++i]);
  return (i);
}

int	my_epurstrlen(char *str)
{
  int	stl;
  int	neg_len;
  int	in;

  stl = stlen(str);
  in = stlen(str) - 1;
  neg_len = 0;
  while (in >= 0 && str[in] == ' ')
    neg_len += 1;
  return (stl - neg_len);
}
