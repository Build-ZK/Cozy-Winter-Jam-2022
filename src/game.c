/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** game.c
*/

#include "../include/game.h"

sfVector2f button_start_pos = {825, 450};

void game_sub(s_game_t **game)
{
    sfVector2i cursor_pos_2i;
    cursor_pos_2i = sfMouse_getPositionRenderWindow((*game)->window);
    sfVector2f cursor_pos = sfRenderWindow_mapPixelToCoords((*game)->window, \
        cursor_pos_2i, NULL);
    while (sfRenderWindow_pollEvent((*game)->window, &(*game)->event)) {
        if ((*game)->event.type == sfEvtClosed) {
            sfRenderWindow_close((*game)->window);
        }
    }
    if ((*game)->event.type == sfEvtMouseButtonPressed) {
        if (cursor_pos.x <= (button_start_pos.x + 150) && cursor_pos.x >= (button_start_pos.x)) {
            if (cursor_pos.y <= (button_start_pos.y + 150) && cursor_pos.y >= button_start_pos.y) {
                (*game)->choose_level_menu = 1;
            }
        }
    }
    sfRenderWindow_drawSprite((*game)->window, (*game)->level[0], NULL);
    if ((*game)->level1 == 1) {
        level_1(game);
    } else if ((*game)->level2 == 1) {
        level_2(game);
    } else if ((*game)->level3 == 1) {
        level_3(game);
    } else if ((*game)->choose_level_menu == 1) {
        level_choose_menu(game, cursor_pos);
    } else {
        sfSprite_setPosition((*game)->button[0], button_start_pos);
        sfRenderWindow_drawSprite((*game)->window, (*game)->button[0], NULL);
    }
    sfRenderWindow_display((*game)->window);
}

int game(int ac, char **av)
{
    s_game_t *game = init_struct();
    while (sfRenderWindow_isOpen(game->window)) {
        game_sub(&game);
    }
}