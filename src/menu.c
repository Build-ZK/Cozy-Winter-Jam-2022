/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** menu.c
*/

#include "../include/game.h"

void level_choose_menu(s_game_t **game, sfVector2f curs_pos)
{
    sfVector2f level_select_hud_pos = {690, 150};
    sfVector2f level1 = {811, 389};
    sfVector2f level2 = {920, 388};
    sfVector2f level3 = {1030, 389};
    sfSprite_setPosition((*game)->level[4], level_select_hud_pos);
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[4], NULL);
    if ((*game)->event.type == sfEvtMouseButtonPressed) {
        if (curs_pos.x <= (level1.x + 50) && curs_pos.x >= (level1.x)) {
            if (curs_pos.y <= (level1.y + 50) && curs_pos.y >= level1.y) {
                (*game)->level1 = 1;
            }
        }
        if (curs_pos.x <= (level2.x + 50) && curs_pos.x >= (level2.x)) {
            if (curs_pos.y <= (level2.y + 50) && curs_pos.y >= level2.y) {
                (*game)->level2 = 1;
            }
        }
        if (curs_pos.x <= (level3.x + 50) && curs_pos.x >= (level3.x)) {
            if (curs_pos.y <= (level3.y + 50) && curs_pos.y >= level3.y) {
                (*game)->level3 = 1;
            }
        }
    }
}