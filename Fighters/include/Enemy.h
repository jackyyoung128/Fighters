#ifndef ENEMY_H
#define ENEMY_H

#include "Plane.h"
#include "Things.h"
#include "Text.h"

class Enemy : public Plane
{
    public:
        Enemy ( sf::Texture&, int, int );
        void updata ( int );
        void addGun ();
        void allMove ();
        bool ifDie ();
        sf::Vector2f getPosition ();
        void enemy1Down ();
        void enemy2Down ();
        void enemy3Down ();
        void beShoted ();
        virtual ~Enemy();
    protected:
    private:
        float enemySpeed, gunSpeed;
};

#endif // ENEMY_H
