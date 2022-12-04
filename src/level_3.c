/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** level_3.c
*/

#include "../include/game.h"

void level_3(s_game_t **game)
{
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[3], NULL);
}