/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update	Wed Apr 05 10:53:03 2017 Full Name
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
  int	count;
  int	nbr;
  int	moins;

  count = 0;
  nbr = 0;
  moins = 0;
  if (str == NULL)
    return (0);
  while (str[count] && (str[count] == '+' || str[count] == '-'))
    {
      if (str[count] == '-')
	moins = moins + 1;
      count = count + 1;
    }
  while (str[count] && (str[count] <= 57 && str[count] >= 48))
    {
      nbr = (nbr * 10) + (str[count] - 48);
      count = count + 1;
    }
  if (moins % 2 == 1)
    nbr = nbr * (-1);
  return (nbr);
}
