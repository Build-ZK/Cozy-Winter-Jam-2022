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
    (*game)->obj_level1[0] = 0;
    (*game)->obj_level1[1] = 0;
    (*game)->obj_level1[2] = 0;
    (*game)->level[1] = create_my_sprite("./image/Fond_Level1.jpg");
}

void init_level2(s_game_t **game)
{
    (*game)->obj_level2[0] = 0;
    (*game)->obj_level2[1] = 0;
    (*game)->obj_level2[2] = 0;
    (*game)->level[2] = create_my_sprite("./image/Fond_Level2.png");
}

void init_level3(s_game_t **game)
{
    (*game)->obj_level3[0] = 0;
    (*game)->obj_level3[1] = 0;
    (*game)->obj_level3[2] = 0;
    (*game)->level[3] = create_my_sprite("./image/Fond_Level3.png");
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
    game->level[5] = create_my_sprite("./image/Find_Objet.png");
    game->level[6] = create_my_sprite("./image/check_icon.png");
    game->level[7] = create_my_sprite("./image/check_icon.png");
    game->level[8] = create_my_sprite("./image/check_icon.png");
    game->level[9] = create_my_sprite("./image/win.png");
    game->button[0] = create_my_sprite("./image/Play_Button.png");
    game->button[1] = create_my_sprite("./image/Bouton_Leave.png");
    init_level1(&game);
    init_level2(&game);
    init_level3(&game);
    return (game);
}