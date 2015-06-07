#include "Things.h"

sf::Font Things::SCORE_FONT, Things::LIFE_FONT;
sf::Texture Things::BACKGROUND, Things::HERO;
sf::Texture Things::BULLET, Things::BUTTON;
sf::Texture Things::ENEMY1, Things::ENEMY1_DOWN1, Things::ENEMY1_DOWN2, Things::ENEMY1_DOWN3, Things::ENEMY1_DOWN4;

void Things::load()
{
    HERO.loadFromFile( "resource/image/shoot.png", sf::IntRect(0, 99, 102, 126));

    ENEMY1.loadFromFile( "resource/image/shoot.png", sf::IntRect(534, 612, 57, 43));
    ENEMY1_DOWN1.loadFromFile( "resource/image/shoot.png", sf::IntRect(267, 347, 57, 51));
    ENEMY1_DOWN2.loadFromFile( "resource/image/shoot.png", sf::IntRect(873, 697, 57, 51));
    ENEMY1_DOWN3.loadFromFile( "resource/image/shoot.png", sf::IntRect(267, 296, 57, 51));
    ENEMY1_DOWN4.loadFromFile( "resource/image/shoot.png", sf::IntRect(930, 697, 57, 51));

    BULLET.loadFromFile( "resource/image/shoot.png", sf::IntRect(1004, 987, 9, 21));
    BUTTON.loadFromFile( "resource/image/shoot.png", sf::IntRect(69, 78, 9, 21));

    BACKGROUND.loadFromFile( "resource/image/background.png");

    SCORE_FONT.loadFromFile( "resource/font/TEMPSITC.ttf");
    LIFE_FONT.loadFromFile( "resource/font/ARIALUNI.ttf");
}



