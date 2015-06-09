#ifndef THINGS_H
#define THINGS_H

#include <SFML/Graphics.hpp>

class Things
{
    public:

        static sf::Font SCORE_FONT, LIFE_FONT;
        static sf::Texture EMPTY;
        static sf::Texture BACKGROUND, GAMEOVER;
        static sf::Texture HERO, HERO_BLOWUP1, HERO_BLOWUP2, HERO_BLOWUP3, HERO_BLOWUP4;
        static sf::Texture BULLET, BUTTON;
        static sf::Texture ENEMY1, ENEMY1_DOWN1, ENEMY1_DOWN2, ENEMY1_DOWN3, ENEMY1_DOWN4;
        static sf::Texture ENEMY2, ENEMY2_HIT, ENEMY2_DOWN1, ENEMY2_DOWN2, ENEMY2_DOWN3, ENEMY2_DOWN4;
        static sf::Texture ENEMY3, ENEMY3_HIT1, ENEMY3_HIT2, ENEMY3_DOWN1, ENEMY3_DOWN2, ENEMY3_DOWN3, ENEMY3_DOWN4, ENEMY3_DOWN5, ENEMY3_DOWN6;

        static void load ();
};

#endif // THINGS_H
