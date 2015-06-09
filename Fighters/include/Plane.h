#ifndef PLANE_H
#define PLANE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "DefineConst.h"
#include "Sound.h"
#include <list>

class Plane
{
    public:
        Plane ( sf::Texture&, int);
        void gunMove ( int );
        void addGun ( sf::Texture& );
        void draw ( sf::RenderWindow& );
        int getRed ();
        void beShoted ();
        sf::Sprite& getModel ();
        bool ifRunInto ( sf::Sprite& );
        virtual ~Plane();
    protected:
        sf::Sprite model;
        int red, level;
        LIST_GUN gun;
        int timeDie;
};

#endif // PLANE_H
