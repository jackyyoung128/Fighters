#include "Sound.h"

sf::Music Sound::GAME_MUSIC;
sf::Music Sound::ENEMY1_DOWN, Sound::ENEMY2_DOWN, Sound::ENEMY3_DOWN, Sound::ENEMY3_FLY;
sf::Music Sound::BULLET, Sound::BUTTON;
sf::Music Sound::GET_BOMB;
sf::Music Sound::ACHIEVEMENT;

void Sound::load()
{
    GAME_MUSIC.openFromFile("resource/sound/game_music.ogg");
    ENEMY1_DOWN.openFromFile("resource/sound/enemy1_down.ogg");
    ENEMY2_DOWN.openFromFile("resource/sound/enemy2_down.ogg");
    ENEMY3_DOWN.openFromFile("resource/sound/enemy3_down.ogg");
    ENEMY3_FLY.openFromFile("resource/sound/big_spaceship_flying.ogg");

    BULLET.openFromFile("resource/sound/bullet.ogg");
    BUTTON.openFromFile("resource/sound/button.ogg");
    GET_BOMB.openFromFile("resource/sound/get_bomb.ogg");
    ACHIEVEMENT.openFromFile("resource/sound/achievement.ogg");
}
