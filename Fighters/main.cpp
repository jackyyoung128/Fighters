#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Sky.h"
#include <iostream>

int gapNow = 0;
int timeNow = 0;
int PASS;
LIST_ENEMY enemy;

void Game ( Hero& hero )
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        hero.move ( -3 );
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        hero.move ( 3 );
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        if ( gapNow > (GAP-PASS*2) )
        {
            hero.addGun ();
            gapNow = 0;
        }
    }
}

void drawEnemy ( sf::RenderWindow& window )
{
    LIST_ENEMY::iterator i;
    for ( i=enemy.begin(); i!=enemy.end(); )
    {
        (*i).draw ( window );
        (*i).allMove();
        if ( 0 == timeNow%(50-PASS*10) && (*i).getRed()>0 )
        {
            (*i).addGun();
        }
        sf::Vector2f pos = (*i).getPosition();
        if ( pos.y<0 || pos.y>400 || (*i).ifDie() )
        {
            enemy.erase ( i++ );
        }
        else i++;
    }
}

void levelUp ()
{
    bool flag = false;
    if ( Text::ans == 20 )
    {
        flag = true;
        PASS = 2;
    }
    if ( Text::ans > 60 )
    {
        PASS = 3;
        flag = true;
    }

    if ( flag )
    {
        LIST_ENEMY::iterator i;
        for ( i=enemy.begin(); i!=enemy.end(); ++i )
        {
            (*i).updata ( PASS );
        }
        Sound::ACHIEVEMENT.play ();
    }
}

int main()
{
    srand (time (0));
    sf::RenderWindow window (sf::VideoMode(480*0.5, 800*0.5), "Fighters");
    window.setFramerateLimit(60);

    PASS = 1;

    Things::load ();
    Sound::load ();
    Text::load ();

    Sky sky;
    Hero hero;
    Sound::GAME_MUSIC.play ();

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear( sf::Color::Black );

        int test = 0;
        if ( hero.getRed() < -1 )
            test = 1;
        switch ( test )
        {
            case 1:
                sky.gameover ( window );
                Sound::GAME_MUSIC.play ();
                break;
            case 0:
                if ( hero.getRed() > 0 )
                {
                    Game ( hero );
                    if ( timeNow > TIME-PASS*10 )
                    {
                        timeNow = 0;
                        sky.addEnemy ( enemy, PASS);
                    }
                    timeNow++;
                    gapNow++;
                    sky.heroGunRunInto ( hero, enemy );
                }
                hero.gunMove ();
                sky.draw ( window, hero );
                drawEnemy ( window );
                break;
        }
        levelUp ();
        Text::outText ( window, hero.getRed(), PASS );

        // end the current frame
        window.display();
    }

    return 0;
}
