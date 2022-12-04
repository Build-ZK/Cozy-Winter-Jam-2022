/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** level_1.c
*/

#include "../include/game.h"

void level_1(s_game_t **game)
{
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[1], NULL);
}