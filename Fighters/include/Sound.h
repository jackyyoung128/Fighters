#ifndef SOUND_H
#define SOUND_H

#include <SFML/Audio.hpp>

class Sound
{
    public:
        static sf::Music GAME_MUSIC;
        static sf::Music ENEMY1_DOWN1;
        static sf::Music BULLET;
        static sf::Music BUTTON;
        //static sf::Music ENEMY_DOWN1;
        //static sf::Music ENEMY_DOWN1;

        static void load();
};

#endif // SOUND_H
