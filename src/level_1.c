/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** level_1.c
*/

#include "../include/game.h"

void end_level_1(s_game_t **game, sfVector2f curs_pos)
{
    sfVector2f win_pos = {650, 150};
    sfVector2f button = {891, 593};
    sfSprite_setPosition((*game)->level[9], win_pos);
    sfRenderWindow_drawSprite((*game)->window,(*game)->level[9], NULL);
    if ((*game)->event.type == sfEvtMouseButtonPressed) {
        if (curs_pos.x <= (button.x + 100) && curs_pos.x >= (button.x)) {
            if (curs_pos.y <= (button.y + 100) && curs_pos.y >= button.y) {
                (*game)->level1 = 0;
            }
        }
    }
}

void level_1(s_game_t **game, sfVector2f curs_pos)
{
    sfVector2f find_obj_pos = {0, 780};
    sfVector2f find_obj_scale = {0.7, 0.7};
    sfVector2f check_scale = {0.25, 0.25};
    sfVector2f check_carrot_pos = {30, 890};
    sfVector2f check_snowball1_pos = {138, 890};
    sfVector2f check_snowball2_pos = {245, 890};
    sfVector2f carrot_pos = {535, 753};
    sfVector2f snowball1_pos = {696, 4};
    sfVector2f snowball2_pos = {1169, 605};
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[1], NULL);
    sfSprite_setScale((*game)->level[5], find_obj_scale);
    sfSprite_setPosition((*game)->level[5], find_obj_pos);
    sfRenderWindow_drawSprite((*game)->window,(*game)->level[5], NULL);
    if ((*game)->event.type == sfEvtMouseButtonPressed) {
        if (curs_pos.x <= (carrot_pos.x + 50) && curs_pos.x >= (carrot_pos.x)) {
            if (curs_pos.y <= (carrot_pos.y + 50) && curs_pos.y >= carrot_pos.y) {
                (*game)->obj_level1[0] = 1;
            }
        }
        if (curs_pos.x <= (snowball1_pos.x + 50) && curs_pos.x >= (snowball1_pos.x)) {
            if (curs_pos.y <= (snowball1_pos.y + 50) && curs_pos.y >= snowball1_pos.y) {
                (*game)->obj_level1[1] = 1;
            }
        }
        if (curs_pos.x <= (snowball2_pos.x + 50) && curs_pos.x >= (snowball2_pos.x)) {
            if (curs_pos.y <= (snowball2_pos.y + 50) && curs_pos.y >= snowball2_pos.y) {
                (*game)->obj_level1[2] = 1;
            }
        }
    }
    if ((*game)->obj_level1[0] == 1) {
        sfSprite_setScale((*game)->level[6], check_scale);
        sfSprite_setPosition((*game)->level[6], check_carrot_pos);
        sfRenderWindow_drawSprite((*game)->window,(*game)->level[6], NULL);
    }
    if ((*game)->obj_level1[1] == 1) {
        sfSprite_setScale((*game)->level[7], check_scale);
        sfSprite_setPosition((*game)->level[7], check_snowball1_pos);
        sfRenderWindow_drawSprite((*game)->window,(*game)->level[7], NULL);
    }
    if ((*game)->obj_level1[2] == 1) {
        sfSprite_setScale((*game)->level[8], check_scale);
        sfSprite_setPosition((*game)->level[8], check_snowball2_pos);
        sfRenderWindow_drawSprite((*game)->window,(*game)->level[8], NULL);
    }
    if ((*game)->obj_level1[2] == 1 && (*game)->obj_level1[1] == 1 && (*game)->obj_level1[0] == 1) {
        end_level_1(game, curs_pos);
    }
}