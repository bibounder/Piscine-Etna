/*
** initiation.c for  in /home/paolin_t/Algo2/defi6
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Tue Oct 21 09:13:44 2014 PAOLINI Tom
** Last update Tue Oct 21 16:57:05 2014 PAOLINI Tom
*/
#include <stdio.h>
#define MAX 50

// tri par selection
void	tri_1(int *tab_valeurs, int nbval)
{
  int	i; 
  int	j;
  int	tmp;
  int	min;
  /* deux compteur parcourent la liste i et j */
  for (i = 0; i < nbval -1; i++)
    {
      min = i; 
      for (j = i + 1; j < nbval; j++) 
	if (tab_valeurs[j] < tab_valeurs[min]) /* incrementation tant que j est est plus petit */
	  min = j; 
      if (min != i)
	{
	  tmp = tab_valeurs[i]; /* creation de tmp pour faire un swap et placer min au debut */
	  tab_valeurs[i] = tab_valeurs[min];
	  tab_valeurs[min] = tmp;
	}
    }
}
// avtanges; tri est fais sur place et stable
// inconv; la boucle est parcouru entierement avant la prise de decision

// tri par insertion
void	tri_2(int *tab_valeurs, int nbval)
{
  int	i;
  int	j;
  int	swp;
  for (i = 1; i < nbval; ++i)
    {
      swp = tab_valeurs[i];
      for (j = i; j > 0 && tab_valeurs[j-1] > swp; j--) //j > 0 vérifie qu’on ne sort pas du tableau //La boucle s’arrête quand tab_valeurs[j-1] devient plus petit que l’élément à insérer
	       tab_valeurs[j] = tab_valeurs[j-1]; // On insère alors swp juste après la case j-1, donc en j.
      tab_valeurs[j] = swp;
    }
}


// avantage; diminue le temps d'exécution 
// inconv; la complexité est meilleure quand le tableau initial est deja dans ordonné un minimum.




#define TRUE 1
#define FALSE 0
// tri a bulle
void	tri_3(int *tab_valeurs, int nbval) /* nbval indique la taille du tableau */
{ 
  int	j;
  int	tmp;
  int	deso;
  
  j = 0;
  tmp = 0;
  deso = 1;
  while (deso)
    {
      deso = FALSE; //il n'y a plus de décalages possibles
      for (j = 0; j < nbval - 1; j++)
	{ 
	  if (tab_valeurs[j + 1] < tab_valeurs[j]) //décalage des plus grandes valeurs du tableau
	    {
	      tmp = tab_valeurs[j + 1];
	      tab_valeurs[j + 1] = tab_valeurs[j];
	      tab_valeurs[j] = tmp;
	      deso = TRUE; 
	    }
	}
    }
}
// avtange: pas besoin de créer un nouveau tableau
// inconvénient: complexe est lent si le tableau est inversé

