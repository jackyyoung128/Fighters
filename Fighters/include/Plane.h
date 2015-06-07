#ifndef PLANE_H
#define PLANE_H

#include <SFML/Graphics.hpp>
#include "DefineConst.h"

class Plane
{
    public:
        Plane ( sf::Texture&, int);
        virtual ~Plane();
    protected:
        sf::Sprite model;
        int red, level;
        sf::Sprite gun[N];
        int gunL, gunR;
};

#endif // PLANE_H
