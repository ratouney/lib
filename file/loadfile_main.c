/*
** loadfile_main.c for FileLoad in /home/ratouney/lib
**
** Made by
** Login   <ratouney>
**
** Started on  Mon Apr  3 19:53:09 2017
** Last update	Wed Apr 05 10:48:41 2017 Full Name
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "malloc.h"
#include "ratlib.h"
#include "loadfile.h"

char	*loadfile_raw(int fd)
{
  char	*temp;
  char	buffer[512];
  int	reade;

  if ((reade = read(fd, &buffer, 511)) == -1)
    return (NULL);
  buffer[reade] = '\0';
  temp = stcl(buffer, 0, 0, 0);
  while (reade > 0)
    {
      reade = read(fd, &buffer, 511);
      buffer[reade] = '\0';
      temp = fuse(temp, buffer, 1);
    }
  return (temp);
}

int	loadfile_sep(char *str, char c)
{
  int	count;
  int	total;

  total = 0;
  count = 0;
  while (str[count])
    {
      if (str[count] == c)
	total++;
      count++;
    }
  return (total);
}

t_content	loadfile_line_prep(t_content info)
{
  char		**data;
  int		seps;

  if ((seps = loadfile_sep(info.raw, '\n')) == 0)
    {
      info.errno = 3;
      return (info);
    }
  if ((data = my_malloc("loadfile", sizeof(char *) * (seps + 2))) == NULL)
    {
      info.errno = 4;
      return (info);
    }
  info.line = data;
  info.errno_mod = seps;
  return (info);
}

t_content	loadfile_line(t_content info)
{
  int		count;
  int		start;
  int		cunt;

  info = loadfile_line_prep(info);
  count = 0;
  cunt = 0;
  while (info.raw[count])
    {
      start = count;
      while (info.raw[count] && info.raw[count] != '\n')
	count++;
      if ((info.line[cunt] = stcl(info.raw, start, count, 0)) == NULL)
	info.line[cunt] = stcl("\0", 0, 0, 0);
      cunt++;
      if (info.raw[count])
	count++;
    }
  info.line[cunt] = NULL;
  return (info);
}

t_content	loadfile(char *path)
{
  t_content	data;

  data.errno = 0;
  if ((data.fd = open(path, O_RDONLY)) < 0)
    {
      data.errno = 1;
      return (data);
    }
  if ((data.raw = loadfile_raw(data.fd)) == NULL)
    {
      data.errno = 2;
      return (data);
    }
  data.size = my_strlen(data.raw);
  data = loadfile_line(data);
  return (data);
}
