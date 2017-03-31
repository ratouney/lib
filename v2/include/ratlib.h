/*
** ratlib.h for ratlib.h in /home/ratouney/lib/v2/include
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 16:28:20 2017 
** Last update Fri Mar 31 09:58:39 2017 
*/

#ifndef RATLIB_H_
# define RATLIB_H_

int	my_strlen(char *str);

int	my_putchar(char c);
int	my_putchar_fd(int fd, char c);

int	my_putstr(char *str);
int	my_pustr_fd(int fd, char *str);

void	my_putnbr(int nbr);
void	my_putnbr_fd(int fd, int nbr);

int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int size);

int	my_getnbr(char *str);
int	fdinstr(char tofind, char *str);

char	*stcl(char *str, int from, int to, int mode);
int	my_nbrlen(int nbr);
char	*my_chartostring(char c);
char	*chtost(char c);
char	*my_nbrtostring(int nbr);
char	*nbtoch(int nbr);
char	*fuse_arg(char *str, ...);
char	*fuse(char *str, char *add, int mode);

#endif /* !RATLIB_H_ */
