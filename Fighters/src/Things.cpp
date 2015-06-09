#include "Things.h"

sf::Font Things::SCORE_FONT, Things::LIFE_FONT;
sf::Texture Things::EMPTY;
sf::Texture Things::BACKGROUND, Things::GAMEOVER, Things::HERO;
sf::Texture Things::HERO_BLOWUP1, Things::HERO_BLOWUP2, Things::HERO_BLOWUP3, Things::HERO_BLOWUP4;
sf::Texture Things::BULLET, Things::BUTTON;
sf::Texture Things::ENEMY1, Things::ENEMY1_DOWN1, Things::ENEMY1_DOWN2, Things::ENEMY1_DOWN3, Things::ENEMY1_DOWN4;
sf::Texture Things::ENEMY2, Things::ENEMY2_HIT, Things::ENEMY2_DOWN1, Things::ENEMY2_DOWN2, Things::ENEMY2_DOWN3, Things::ENEMY2_DOWN4;
sf::Texture Things::ENEMY3, Things::ENEMY3_HIT1, Things::ENEMY3_HIT2, Things::ENEMY3_DOWN1, Things::ENEMY3_DOWN2, Things::ENEMY3_DOWN3, Things::ENEMY3_DOWN4, Things::ENEMY3_DOWN5, Things::ENEMY3_DOWN6;

void Things::load()
{
    HERO.loadFromFile ( "resource/image/shoot.png", sf::IntRect(0, 99, 102, 126));
    HERO_BLOWUP1.loadFromFile ( "resource/image/shoot.png", sf::IntRect(165, 234, 102, 126));
    HERO_BLOWUP2.loadFromFile ( "resource/image/shoot.png", sf::IntRect(330, 624, 102, 126));
    HERO_BLOWUP3.loadFromFile ( "resource/image/shoot.png", sf::IntRect(330, 498, 102, 126));
    HERO_BLOWUP4.loadFromFile ( "resource/image/shoot.png", sf::IntRect(432, 624, 102, 126));

    EMPTY.loadFromFile ( "resource/image/shoot.png", sf::IntRect(0, 0, 1, 1));
    ENEMY1.loadFromFile( "resource/image/shoot.png", sf::IntRect(534, 612, 57, 43));
    ENEMY1_DOWN1.loadFromFile( "resource/image/shoot.png", sf::IntRect(267, 347, 57, 51));
    ENEMY1_DOWN2.loadFromFile( "resource/image/shoot.png", sf::IntRect(873, 697, 57, 51));
    ENEMY1_DOWN3.loadFromFile( "resource/image/shoot.png", sf::IntRect(267, 296, 57, 51));
    ENEMY1_DOWN4.loadFromFile( "resource/image/shoot.png", sf::IntRect(930, 697, 57, 51));

    ENEMY2.loadFromFile( "resource/image/shoot.png", sf::IntRect(0, 0, 69, 99));
    ENEMY2_HIT.loadFromFile( "resource/image/shoot.png", sf::IntRect(432, 525, 69, 99));
    ENEMY2_DOWN1.loadFromFile( "resource/image/shoot.png", sf::IntRect(534, 655, 69, 95));
    ENEMY2_DOWN2.loadFromFile( "resource/image/shoot.png", sf::IntRect(603, 655, 69, 95));
    ENEMY2_DOWN3.loadFromFile( "resource/image/shoot.png", sf::IntRect(672, 653, 69, 95));
    ENEMY2_DOWN4.loadFromFile( "resource/image/shoot.png", sf::IntRect(741, 653, 69, 95));

    ENEMY3.loadFromFile( "resource/image/shoot.png", sf::IntRect(  335, 750, 169, 258 ));
    ENEMY3_HIT1.loadFromFile( "resource/image/shoot.png", sf::IntRect( 504, 750, 169, 258 ));
    ENEMY3_HIT2.loadFromFile( "resource/image/shoot.png", sf::IntRect( 166, 750, 169, 258 ));
    ENEMY3_DOWN1.loadFromFile( "resource/image/shoot.png", sf::IntRect( 0, 486, 165, 261 ));
    ENEMY3_DOWN2.loadFromFile( "resource/image/shoot.png", sf::IntRect( 0, 225, 165, 261 ));
    ENEMY3_DOWN3.loadFromFile( "resource/image/shoot.png", sf::IntRect( 839, 748, 165, 260 ));
    ENEMY3_DOWN4.loadFromFile( "resource/image/shoot.png", sf::IntRect( 165, 486, 165, 261 ));
    ENEMY3_DOWN5.loadFromFile( "resource/image/shoot.png", sf::IntRect( 673, 748, 165, 260 ));
    ENEMY3_DOWN6.loadFromFile( "resource/image/shoot.png", sf::IntRect( 0, 747, 165, 261 ));

    BULLET.loadFromFile( "resource/image/shoot.png", sf::IntRect(1004, 987, 9, 21));
    BUTTON.loadFromFile( "resource/image/shoot.png", sf::IntRect(69, 78, 9, 21));

    BACKGROUND.loadFromFile( "resource/image/background.png");
    GAMEOVER.loadFromFile( "resource/image/gameover.png");

    SCORE_FONT.loadFromFile( "resource/font/TEMPSITC.ttf");
    LIFE_FONT.loadFromFile( "resource/font/ARIALUNI.ttf");
}



