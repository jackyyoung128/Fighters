#include "Plane.h"

Plane::Plane ( sf::Texture& thing, int lv )
{
    model.setTexture ( thing );
    model.setScale (sf::Vector2f(0.5f, 0.5f));
    level = lv;
    if ( lv == 0 )
    {
        model.setPosition (sf::Vector2f( 180*0.5, 650*0.5));
        red = 3;
    }
    if ( lv == 1 )
    {
        int x = rand ()%200;
        model.setPosition (sf::Vector2f( x, 10));
        red = 1;
    }
    if ( lv == 2 )
    {
        int x = rand ()%200;
        model.setPosition (sf::Vector2f( x, 10));
        red = 2;
    }
    if ( lv == 3 )
    {
        int x = rand ()%150;
        model.setPosition (sf::Vector2f( x, 0));
        red = 3;
        Sound::ENEMY3_FLY.play ();
    }

    timeDie = 0;
}

void Plane::gunMove ( int v )
{
    LIST_GUN::iterator i;
    for ( i=gun.begin(); i!=gun.end(); i++ )
    {
        (*i).move (0, v);
    }

    for ( i=gun.begin(); i!=gun.end(); )
    {
        sf::Vector2f pos = (*i).getPosition();
        if ( pos.y<0 || pos.y>400 )
        {
            gun.erase ( i++ );
        }
        else i++;
    }
}

void Plane::addGun ( sf::Texture& thing )
{
    sf::Sprite temp;
    sf::Vector2f pos = model.getPosition();
    temp.setTexture ( thing );
    temp.setScale ( sf::Vector2f(0.5f, 0.5f) );
    if ( level < 2 )
    {
        if ( level == 0)
        {
            pos.y -= 12;
            pos.x += 24;
        }
        if ( level == 1)
        {
            pos.x += 13;
            pos.y += 23;
        }
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
    }
    if ( level == 3)
    {
        pos.x += 15;
        pos.y += 125;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
        pos.x += 85-33;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
        pos.y += 5;
        pos.x += 32-85+20;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
        pos.x += 15;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
    }
    if ( level == 2)
    {
        pos.x += 8;
        pos.y += 50;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
        pos.x += 16;
        temp.setPosition ( sf::Vector2f ( pos.x, pos.y) );
        gun.push_back (temp);
    }
}

void Plane::draw ( sf::RenderWindow& window )
{
    window.draw (model);
    LIST_GUN::iterator i;
    for ( i=gun.begin(); i!=gun.end(); i++ )
    {
        window.draw ( (*i) );
    }
}

int Plane::getRed ()
{
    return red;
}

sf::Sprite& Plane::getModel ()
{
    return model;
}

bool Plane::ifRunInto ( sf::Sprite& thing )
{
    LIST_GUN::iterator i;
    for ( i=gun.begin(); i!=gun.end(); i++ )
    {
        if ((*i).getGlobalBounds().intersects (thing.getGlobalBounds()))
        {
            gun.erase (i++);
            return true;
        }
    }
    return false;
}

void Plane::beShoted ()
{
    red--;
}

Plane::~Plane()
{
    //dtor
}
