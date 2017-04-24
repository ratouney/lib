/*
** power_it.c for lib in /home/ratouney/lib/v2/misc
**
** Made by
** Login   <ratouney>
**
** Started on  Fri Mar 31 15:10:54 2017
** Last update	Wed Apr 05 10:52:25 2017 Full Name
*/

int	power_int(int number, int power)
{
  int	count;
  int	total;

  count = 0;
  total = 1;
  while (count < power)
    {
      total *= number;
      count++;
    }
  return (total);
}

float	power_float(float number, float power)
{
  float	count;
  float	total;

  count = 0.00;
  total = 1.00;
  while (count < power)
    {
      total *= number;
      count += 1.00;
    }
  return (total);
}
