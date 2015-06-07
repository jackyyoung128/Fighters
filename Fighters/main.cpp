#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Things.h"
#include "Sky.h"
#include "Hero.h"
#include "Sound.h"
#include "DefineConst.h"
#include <stdlib.h>

int t = M;

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
        if (t==M)
        {
            hero.addGun ();
        }
    }
    t--;
    if (t==0)
        t=M;

    //SKY::allMove ();
    //SKY::gunIfRunInto ();
}

int main()
{
    srand (time (0));
    sf::RenderWindow window (sf::VideoMode(480*0.5, 800*0.5), "Fighters");
    window.setFramerateLimit(60);

    Things::load ();
    Sound::load ();

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
        window.clear(sf::Color::Black);

        sky.draw ( window );
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}
