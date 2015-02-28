/*
** my_strcmp.c for my_strcmp in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 14:32:14 2014 NGUYEN Victoria
** Last update Fri Oct 10 14:32:35 2014 NGUYEN Victoria
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  for (i = 0; s1[i] != '\0'; i++)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
    }
  if (s2[i] != '\0')
    return (-1);
  return (0);
}
