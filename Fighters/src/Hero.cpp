#include "Hero.h"

Hero::Hero( void ) : Plane ( Things::HERO, 0)
{
    gunSpeed = -5;
}

void Hero::move ( int x )
{
    Plane::model.move ( x, 0);
    sf::Vector2f pos = model.getPosition();
    if (pos.x<=0) model.move(3, 0);
    if (pos.x>=240-53) model.move(-3, 0);

}

void Hero::addGun ()
{
    Plane::addGun ( Things::BULLET );
    Sound::BULLET.play ();
}

void Hero::gunMove ()
{
    if ( getRed()<1 )
    {
        if ( 10==timeDie )
        {
            red--;
            timeDie = 0;
            heroDown ();
        }
        else timeDie++;
    }
    Plane::gunMove ( gunSpeed );
}

void Hero::heroDown ()
{
    if ( red == 2 )
        model.setTexture ( Things::HERO_BLOWUP1 );
    if ( red == 1 )
        model.setTexture ( Things::HERO_BLOWUP2 );
    if ( red == 0 )
        model.setTexture ( Things::HERO_BLOWUP3 );
    if ( red == -1 )
        model.setTexture ( Things::HERO_BLOWUP4 );
}

Hero::~Hero()
{
    //dtor
}
