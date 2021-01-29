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

back_t *create_background (char *path)
{
    back_t *back = malloc(sizeof(back_t));

    back->texture = sfTexture_createFromFile(path, NULL);
    back->sprite = sfSprite_create();
    sfSprite_setTexture(back->sprite, back->texture, sfTrue);
    return (back);
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
    game = malloc(sizeof(game_t));

    game->window = create_window(1140, 640);
    game->background = create_background("ressources/background.png");
}

void render_everything(game_t *game)
{
    sfRenderWindow_display(game->window);
    sfRenderWindow_drawSprite(game->window, game->background->sprite, NULL);
}