/*
** my_strlen.c for my_strlen.c in /home/ratouney/CPool_Day04
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

int	my_strcmp(char *s1, char *s2)
{
  int	count;
  count = 0;
  while (s1[count] != '\0' && s2[count] != '\0')
    {
      if (s1[count] < s2[count])
	return (2);
      else if (s1[count] > s2[count])
	return (1);
      else
	count++;
    }
  return (0);
}
