/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** init_struct.c
*/

#include "../include/game.h"
#include <stdlib.h>

void init_level1(s_game_t **game)
{
    sfVector2f carrot_pos = {0, 0};
    sfVector2f snowball1_pos = {100, 100};
    sfVector2f snowball2_pos = {200, 200};
    (*game)->level[1] = create_my_sprite("./image/Fond_Level1.jpg");
    (*game)->pos_level_1[0] = carrot_pos;
    (*game)->pos_level_1[1] = snowball1_pos;
    (*game)->pos_level_1[2] = snowball2_pos;
}

void init_level2(s_game_t **game)
{
    sfVector2f carrot_pos = {0, 0};
    sfVector2f snowball1_pos = {100, 100};
    sfVector2f snowball2_pos = {200, 200};
    (*game)->level[2] = create_my_sprite("./image/Fond_Level2.png");
    (*game)->pos_level_2[0] = carrot_pos;
    (*game)->pos_level_2[1] = snowball1_pos;
    (*game)->pos_level_2[2] = snowball2_pos;
}

void init_level3(s_game_t **game)
{
    sfVector2f carrot_pos = {0, 0};
    sfVector2f snowball1_pos = {100, 100};
    sfVector2f snowball2_pos = {200, 200};
    (*game)->level[3] = create_my_sprite("./image/Fond_Level3.jpg");
    (*game)->pos_level_3[0] = carrot_pos;
    (*game)->pos_level_3[1] = snowball1_pos;
    (*game)->pos_level_3[2] = snowball2_pos;
}

s_game_t *init_struct(void)
{
    s_game_t *game = NULL;
    game = malloc(sizeof(*game));
    game->choose_level_menu = 0;
    game->window = create_my_window(1920, 1080);
    game->level1 = 0;
    game->level2 = 0;
    game->level3 = 0;
    game->level[0] = create_my_sprite("./image/Main_Menu_Fond.jpg");
    game->level[4] = create_my_sprite("./image/Level_Select_hud.png");
    game->button[0] = create_my_sprite("./image/Play_Button.png");
    init_level1(&game);
    init_level2(&game);
    init_level3(&game);
    return (game);
}