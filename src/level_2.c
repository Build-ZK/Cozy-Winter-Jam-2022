/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** level_2.c
*/

#include "../include/game.h"

void level_2(s_game_t **game)
{
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[2], NULL);
}