/*
** fonction.c for fonction in /home/alimou_c/Battle01/alimou_c/my_battleship
** 
** Made by ALI MOUIGNI Chamsoudine
** Login   <alimou_c@etna-alternance.net>
** 
** Started on  Sat Oct 25 09:43:23 2014 ALI MOUIGNI Chamsoudine
** Last update Sat Oct 25 16:20:27 2014 ALI MOUIGNI Chamsoudine
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "my_battle.h"

/* innitializ tab */
void grille_battle (char planbattle[10][10])
{
  int	i;
  int	j;

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	 planbattle[i][j] = ' ';
	}
    }
}

/*Afficher la grille de jeu */
void aff_grille(char planbattle[10][10], int cpt)
{
  int   i;
  int   j;

  my_putstr("Plan de bataille :\n");
  my_putstr("____________\n");
  i = 0;
  while (i < 10)
    {
      my_putchar('|');
      for (j = 0; j < 10; j++)
        {
          my_putchar(planbattle[i][j]);
        }
      my_putchar('|');
      my_putchar('\n');
      i += 1;
    }
  my_putstr("------------\n");
  my_putstr("Nombres de coups : ");
  my_getnumber(cpt);
  my_putchar('\n');
}


/*comparrer deux chaine */
int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && n > 0)
    {
      n -= 1;
      i += 1;
    }
  if (n == 0)
    return (0);
  else
    return (1);
}

void	verified(char planbattle[10][10], int battlefield[10][10])
{
  if (my_searchship(planbattle, battlefield) == 1)
    {
      my_putstr("Vous avez dÃ©truit tous les bateaux .... FÃ©licitation");
      my_putchar('\n');
    }
}
/* rechercher une position dans le tableau */
void	my_searchpos(char planbattle[10][10], char *buffer, int cpt, int battlefield[10][10])
{
  int	abs;
  int	ord;

  abs = (getnumber(buffer)) - 1;
  ord = (buffer[0] - 17) - '0';
  
  if (battlefield[ord][abs] == 1)
    {
      planbattle[ord][abs] = 'T';
      my_putstr("\n\n");
      my_putstr("TouchÃ©");
      my_putstr("\n\n");
      aff_grille(planbattle, cpt);
      verified(planbattle, battlefield);
    }
  else
    {
      planbattle[ord][abs] = 'X';
      my_putstr("\n\n");
      my_putstr("ManquÃ©");
      my_putstr("\n\n");
      aff_grille(planbattle, cpt);
    }
}