#ifndef SKY_H
#define SKY_H

#include <SFML/Graphics.hpp>
#include "Things.h"

class Sky
{
    public:
        Sky ();

        void draw ( sf::RenderWindow& );
    private:
        sf::Sprite background;
};

#endif // SKY_H
