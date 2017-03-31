/*
** main.c for GetNextLine in /home/ratouney/gnl
** 
** Made by Ratouney
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Tue Mar 28 13:46:20 2017 
** Last update Fri Mar 31 13:05:16 2017 
*/

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

/*
** Merci jesus pour ta bénédiction
*/

int	gnl_stl(char *str)
{
  int	count;

  count = 0;
  while (str[count])
    count++;
  return (count);
}

char	*gnl_fuse(char *str, char *str1, int mode)
{
  int	count;
  int	cunt;
  char	*new;

  if ((new = malloc(sizeof(char) * (gnl_stl(str) + gnl_stl(str1) + 1))) == NULL)
    return (NULL);
  count = -1;
  while (++count < gnl_stl(str))
    new[count] = str[count];
  cunt = -1;
  while (++cunt < gnl_stl(str1))
    new[count + cunt] = str1[cunt];
  new[count + cunt] = '\0';
  if (mode == 1)
    free(str);
  else if (mode == 2)
    free(str1);
  else if (mode == 3)
    {
      free(str);
      free(str1);
    }
  return (new);
}

int	gnl_fdinstr(char tofind, char *str)
{
  int	count;

  count = 0;
  if (str == NULL)
    return (-2);
  while (str[count] != '\0')
    {
      if (str[count] == tofind)
	return (count);
      count++;
    }
  return (-1);
}

char	*gnl_stcl(char *str, int from, int to, int mode)
{
  int	count;
  int	min;
  int	max;
  char	*new;

  if (to <= from && to != 0)
    return (NULL);
  min = (from >= 0 ? from : 0);
  if (to == 0)
    max = gnl_stl(str);
  else
    max = (to <= gnl_stl(str) ? to : gnl_stl(str));
  if ((new = malloc(sizeof(char) * (max - min + 2))) == NULL)
    return (NULL);
  count = -1;
  while (++count + min < max)
    new[count] = str[count + min];
  new[count] = '\0';
  if (mode == 1)
    free(str);
  return (new);
}

char		*get_next_line(int fd)
{
  static char	*save = NULL;
  static int	i[2];
  char		buf[RDS + 1];
  char		*temp;

  if (i[0] == 1)
    return (NULL);
  while (1)
    if (save == NULL && (i[1] = read(fd, buf, RDS) + (buf[RDS] = '\0')))
      save = gnl_stcl(buf, 0, 0, 0);
    else if ((i[1] = gnl_fdinstr('\n', save)) >= 0)
      {
	temp = gnl_stcl(save, 0, i[1], 0);
	save = gnl_stcl(save, i[1] + 1, 0, 1);
	return (temp);
      }
    else if (i[1] <= 0)
      {
	i[1] = read(fd, buf, RDS);
	buf[i[1]] = '\0';
	if (i[1] > 0)
	  save = gnl_fuse(save, buf, 1);
	else if ((i[0] = 1))
	  return (save = gnl_fuse(save, buf, 1));
      }
}
