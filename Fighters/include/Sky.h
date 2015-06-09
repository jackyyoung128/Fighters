#ifndef SKY_H
#define SKY_H

#include "Things.h"
#include "Hero.h"
#include "Enemy.h"

class Sky
{
    public:
        Sky ();

        void addEnemy ( LIST_ENEMY&, int );
        void heroGunRunInto ( Hero&, LIST_ENEMY& );
        void draw ( sf::RenderWindow& );
        void gameover ( sf::RenderWindow& );
    private:
        sf::Sprite background;
};

#endif // SKY_H
