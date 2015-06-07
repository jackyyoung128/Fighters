#include "Sound.h"

sf::Music Sound::GAME_MUSIC;
sf::Music Sound::ENEMY1_DOWN1;
sf::Music Sound::BULLET, Sound::BUTTON;

void Sound::load()
{
    GAME_MUSIC.openFromFile("resource/sound/game_music.ogg");
    ENEMY1_DOWN1.openFromFile("resource/sound/enemy1_down.ogg");
    BULLET.openFromFile("resource/sound/bullet.ogg");
    BUTTON.openFromFile("resource/sound/button.ogg");
}
