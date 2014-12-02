/*
** globales.c for variable globale in /home/alimou_c/Battle01/alimou_c/my_battleship
** 
** Made by ALI MOUIGNI Chamsoudine
** Login   <alimou_c@etna-alternance.net>
** 
** Started on  Sat Oct 25 17:26:58 2014 ALI MOUIGNI Chamsoudine
** Last update Sat Oct 25 18:12:20 2014 ALI MOUIGNI Chamsoudine
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "my_battle.h"
#include <ctype.h>

void	aff_result(int battlefield[10][10], int cpt)
{
  char	*buffer;
  do
    {
      my_putstr("Entrez une position : ");
      buffer = readLine();
      if (my_strncmp(buffer,"quit",4) == 0)
	break;
      cpt += 1;
      my_searchpos(planbattle, buffer, cpt, battlefield);
    }while (my_searchship(planbattle, battlefield) == 0);
}