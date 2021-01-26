/*
** EPITECH PROJECT, 2021
** Global_Game_Jam
** File description:
** init
*/

#include "game.h"

void destroy_everything(game_t *game)
{
    sfRenderWindow_destroy(game->window);
}

sfRenderWindow *create_window(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    video_mode.height = height;
    video_mode.width = width;
    window = sfRenderWindow_create(video_mode, "Game Window", \
    sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(window, 75);
    return (window);
}

game_t *init_everything(game_t *game)
{
    game->window = create_window(800, 600);
}

void render_everything(game_t *game)
{
    sfRenderWindow_display(game->window);
}