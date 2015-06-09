#ifndef SOUND_H
#define SOUND_H

#include <SFML/Audio.hpp>

class Sound
{
    public:
        static sf::Music GAME_MUSIC;
        static sf::Music ENEMY1_DOWN, ENEMY2_DOWN, ENEMY3_DOWN, ENEMY3_FLY;
        static sf::Music BULLET, BUTTON;
        static sf::Music GET_BOMB;
        static sf::Music ACHIEVEMENT;
        //static sf::Music ENEMY_DOWN1;
        //static sf::Music ENEMY_DOWN1;

        static void load();
};

#endif // SOUND_H
