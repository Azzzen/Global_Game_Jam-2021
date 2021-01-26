/*
** EPITECH PROJECT, 2021
** Global_Game_Jam
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#include "unistd.h"
#include "stdio.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Export.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Music.h>

typedef struct game_s
{
    sfRenderWindow *window;
    sfEvent event;
}game_t;

/*INIT.C*/
sfRenderWindow *create_window(int width, int height);
game_t *init_everything(game_t *game);
void render_everything(game_t *game);
void destroy_everything(game_t *game);

#endif /* !GAME_H_ */
