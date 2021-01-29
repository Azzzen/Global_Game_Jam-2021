/*
** EPITECH PROJECT, 2021
** Global_Game_Jam
** File description:
** main
*/

#include "game.h"

void play_game(void)
{
    game_t *game = init_everything(game);

    while (sfRenderWindow_isOpen(game->window)) {
        render_everything(game);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            analyse_events(game);
        }
    }
    destroy_everything(game);
}

int main (int ac, char **av, char **env)
{
    if (env[0] == NULL)
        return (84);
    if (ac != 1)
        return (0);
    else
        play_game();
    return (0);
}