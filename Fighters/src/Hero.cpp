#include "Hero.h"

Hero::Hero( void ) : Plane ( Things::HERO, 0) {}

void Hero::move ( int x )
{
    Plane::model.move ( x, 0);
    sf::Vector2f pos = model.getPosition();
    if (pos.x<=0) model.move(3, 0);
    if (pos.x>=240-53) model.move(-3, 0);

}

void Hero::addGun ()
{
    sf::Vector2f pos = model.getPosition();
    gunR++;
    gun[gunR].setTexture ( Things::BULLET );
    gun[gunR].setScale ( sf::Vector2f(0.5f, 0.5f) );
    pos.y -= 12;
    pos.x += 23;
    gun[gunR].setPosition ( sf::Vector2f ( pos.x, pos.y) );
}

void Hero::draw ( sf::RenderWindow& window )
{
    window.draw (model);
}

Hero::~Hero()
{
    //dtor
}
