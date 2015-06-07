#include "SKY.h"

Sky::Sky ()
{
    background.setTexture ( Things::BACKGROUND );
    background.setScale ( sf::Vector2f(0.5f, 0.5f) );
}

void Sky::draw ( sf::RenderWindow& window )
{
    window.draw ( background );

}
