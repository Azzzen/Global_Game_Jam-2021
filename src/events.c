/*
** EPITECH PROJECT, 2021
** Global_Game_Jam
** File description:
** events
*/

#include "game.h"

// void manage_click(game_t *game)
// {
//     // if (game->event.mouseButton.button == sfMouseLeft) {
//     //     if ((game->event.mouseButton.x >= game->ship->position.x) \
//     //     && (game->event.mouseButton.x <= game->ship->position.x + 110)\
//     //     && (game->event.mouseButton.y >= game->ship->position.y) \
//     //     && (game->event.mouseButton.y <= game->ship->position.y + 110))
//     //         explode_ship(game);
//     // }
// }

int analyse_events(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}