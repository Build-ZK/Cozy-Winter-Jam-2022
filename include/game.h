/*
** EPITECH PROJECT, 2022
** Cozy-Winter-Jam-2022
** File description:
** game.h
*/

#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics.h>

#pragma once

typedef struct s_game {
    sfEvent event;
    int choose_level_menu;
    int level1;
    int level2;
    int level3;
    int obj_level1[3];
    int obj_level2[3];
    int obj_level3[3];
    sfRenderWindow *window;
    sfSprite *level[10];
    sfSprite *button[5];
} s_game_t;

s_game_t *init_struct(void);
sfSprite *create_my_sprite(char *path);
int game(int ac, char **av);
sfRenderWindow *create_my_window(unsigned int width, unsigned int height);

void level_choose_menu(s_game_t **game, sfVector2f curs_pos);

void level_1(s_game_t **game, sfVector2f curs_pos);
void level_2(s_game_t **game, sfVector2f curs_pos);
void level_3(s_game_t **game, sfVector2f curs_pos);