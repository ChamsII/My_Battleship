/*
** my_battle.h for my_battle in /home/alimou_c/Battle01/alimou_c/my_battleship
** 
** Made by ALI MOUIGNI Chamsoudine
** Login   <alimou_c@etna-alternance.net>
** 
** Started on  Sat Oct 25 11:00:34 2014 ALI MOUIGNI Chamsoudine
** Last update Sat Oct 25 18:10:44 2014 ALI MOUIGNI Chamsoudine
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

char	planbattle[10][10];

/*afficher carractere */
void	my_putchar(char c);

/* afficher chaine*/
void	my_putstr(char *str);

/* innitializ tab */
void	grille_battle (char planbattle[10][10]);

void	aff_grille(char planbattle[10][10], int cpt);

int	my_strncmp(char *s1, char *s2, int n);

void	my_searchpos(char planbattle[10][10], char *buffer, int cpt, int battlefield[10][10]);

int	my_searchship(char planbattle[10][10], int battlefield[10][10]);

void	my_getnumber(int cpt);

char	*readLine();

int	getnumber(char *str);

void	verified(char planbattle[10][10], int battlefield[10][10]);

void    aff_result(int tab[10][10], int cpt);