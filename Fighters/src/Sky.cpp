#include "SKY.h"

Sky::Sky ()
{
    background.setTexture ( Things::BACKGROUND );
    background.setScale ( sf::Vector2f(0.5f, 0.5f) );
}

void Sky::draw ( sf::RenderWindow& window, Hero &hero )
{
    window.draw ( background );
    hero.draw ( window );
}

void Sky::gameover ( sf::RenderWindow& window )
{
    sf::Sprite over;
    over.setTexture ( Things::GAMEOVER );
    over.setScale ( sf::Vector2f(0.5f, 0.5f) );
    window.draw ( over );
}

void Sky::heroGunRunInto ( Hero& hero, LIST_ENEMY& enemy )
{
    LIST_ENEMY::iterator i;
    for ( i=enemy.begin(); i!=enemy.end(); i++ )
    {
        if ( (*i).getRed ()>0 && hero.ifRunInto( (*i).getModel() ) )
        {
            (*i).beShoted ();
        }
    }

    for ( i=enemy.begin(); i!=enemy.end(); i++ )
    {
        if ( (*i).ifRunInto( hero.getModel() ) )
        {
            Sound::GET_BOMB.play ();
            hero.beShoted ();
            hero.heroDown ();
        }

        if ( (*i).getRed ()>0 && (*i).getModel().getGlobalBounds().intersects (hero.getModel().getGlobalBounds()))
        {
            Sound::GET_BOMB.play ();
            (*i).beShoted ();
            hero.beShoted ();
            hero.heroDown ();
        }
    }
}

void Sky::addEnemy ( LIST_ENEMY& enemy, int pass )
{
    int lv = rand ()%pass;
    lv++;
    if (lv == 1)
    {
        Enemy temp ( Things::ENEMY1, lv, pass );
        enemy.push_back ( temp );
    }
    if (lv == 2)
    {
        Enemy temp ( Things::ENEMY2, lv, pass );
        enemy.push_back ( temp );
    }
    if (lv == 3)
    {
        Enemy temp ( Things::ENEMY3, lv, pass );
        enemy.push_back ( temp );
    }
}
