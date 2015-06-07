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
        int x = rand ()%160;
        x+=40;
        model.setPosition (sf::Vector2f( x, 10));
        red = 1;
    }
    gunL = 1;
    gunR = 0;
}

Plane::~Plane()
{
    //dtor
}
