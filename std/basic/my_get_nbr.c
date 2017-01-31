/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Dec 11 11:45:49 2016 John Doe
*/

int	my_get_nbr(char *str)
{
  int	count;
  int	nbr;
  int	moins;

  count = 0;
  nbr = 0;
  moins = 0;
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
