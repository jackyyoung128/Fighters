#ifndef TEXT_H
#define TEXT_H

#include "Things.h"

class Text
{
    public:
        static void load ();
        static void outText ( sf::RenderWindow&, int, int );

        static sf::Text score;
        static sf::Text life;
        static sf::Text level;
        static int ans;
};

#endif // TEXT_H
