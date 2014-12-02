/*
** main.c for main.c in /home/alimou_c/Battle01/alimou_c/my_battleship
** 
** Made by ALI MOUIGNI Chamsoudine
** Login   <alimou_c@etna-alternance.net>
** 
** Started on  Sat Oct 25 09:53:12 2014 ALI MOUIGNI Chamsoudine
** Last update Sat Oct 25 18:09:41 2014 ALI MOUIGNI Chamsoudine
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "my_battle.h"
#include <ctype.h>

int	main()
{
  static int battlefield[10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
  };
  int	cpt;
 
  cpt = 0;
  grille_battle(planbattle);
  aff_grille(planbattle, cpt);
  aff_result(battlefield, cpt);
  my_putstr("Game Over ...!!");
  my_putchar('\n');
  return (0);
}