/*
** str_is.c for lib in /home/ratouney/lib/v2/misc
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Fri Mar 31 15:13:20 2017 
** Last update Fri Mar 31 15:20:16 2017 
*/

int	char_isnum(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	char_islow(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

int	char_isupp(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}

int	char_isalpha(char c)
{
  if (char_islow(c) == 1 || char_isupp(c) == 1)
    return (1);
  else
    return (0);
}

int	char_isalphanum(char c)
{
  if (char_isalpha(c) == 1 || char_isnum(c) == 1)
    return (1);
  else
    return (0);
}
