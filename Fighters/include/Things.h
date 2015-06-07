#ifndef THINGS_H
#define THINGS_H

#include <SFML/Graphics.hpp>

class Things
{
    public:

        static sf::Font SCORE_FONT, LIFE_FONT;
        static sf::Texture BACKGROUND, HERO;
        static sf::Texture BULLET, BUTTON;
        static sf::Texture ENEMY1, ENEMY1_DOWN1, ENEMY1_DOWN2, ENEMY1_DOWN3, ENEMY1_DOWN4;

        static void load ();
};

#endif // THINGS_H
