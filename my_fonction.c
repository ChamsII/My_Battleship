/*
** my_fonction.c for my_fonction in /home/alimou_c/Battle01/alimou_c/my_battleship
** 
** Made by ALI MOUIGNI Chamsoudine
** Login   <alimou_c@etna-alternance.net>
** 
** Started on  Sat Oct 25 15:59:52 2014 ALI MOUIGNI Chamsoudine
** Last update Sat Oct 25 16:02:43 2014 ALI MOUIGNI Chamsoudine
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "my_battle.h"

int     getnumber(char *str)
{
  int   num;
  int   i;

  i = 1;
  num = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
        {
          num = (num * 10) + (str[i] - '0');
          i += 1;
        }
    }
  return (num);
}


void    my_getnumber(int cpt)
{
  if (cpt < 10)
    {
      my_putchar(cpt + '0');
    }
  if (cpt >= 10)
    {
      my_getnumber(cpt / 10);
      my_putchar(cpt % 10 + '0');
    }
}

/*Verifier si tout les bateaux on Ã©tÃ© dÃ©truit */
int     my_searchship(char planbattle[10][10], int battlefield[10][10])
{
  int   i;
  int   j;

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
          if (battlefield[i][j] == 1 && planbattle[i][j] != 'T')
            return (0);
	}
    }
  return (1);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i += 1;
    }
}