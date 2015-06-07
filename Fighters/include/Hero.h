#ifndef HERO_H
#define HERO_H

#include <SFML/Graphics.hpp>
#include "Things.h"
#include "Plane.h"
#include "DefineConst.h"

class Hero: public Plane
{
    public:
        Hero( void );

        void move ( int );
        void addGun ();
        void draw ( sf::RenderWindow& );
        virtual ~Hero();
    protected:
    private:
};

#endif // HERO_H
