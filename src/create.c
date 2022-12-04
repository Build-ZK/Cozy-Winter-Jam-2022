/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myhunter-eliott1.mathieu
** File description:
** create.c
*/

#include <SFML/Graphics.h>
#include "../include/game.h"
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <stdio.h>
#include <stdlib.h>

sfSprite *create_my_sprite(char *path)
{
    sfSprite *my_sprite = sfSprite_create();
    sfTexture *my_texture = sfTexture_createFromFile(path, NULL);

    sfSprite_setTexture(my_sprite, my_texture, sfFalse);
    return (my_sprite);
}

sfRenderWindow *create_my_window(unsigned int width, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode mode;

    mode.width = width;
    mode.height = height;
    mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(mode, "Christmas Jam", sfResize | sfClose, NULL);
    return (window);
}
