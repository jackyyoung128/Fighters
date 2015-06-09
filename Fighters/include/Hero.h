#ifndef HERO_H
#define HERO_H

#include "Things.h"
#include "Plane.h"


class Hero: public Plane
{
    public:
        Hero( void );

        void move ( int );
        void addGun ();
        void gunMove ();
        void heroDown ();
        virtual ~Hero();
    protected:
    private:
        int gunSpeed;
};

#endif // HERO_H
