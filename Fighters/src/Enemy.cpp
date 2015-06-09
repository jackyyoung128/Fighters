#include "Enemy.h"

Enemy::Enemy ( sf::Texture& thing , int lv, int pass ) : Plane ( thing, lv )
{
    updata ( pass );
}

void Enemy::updata ( int pass )
{
    enemySpeed = 1+pass*0.5;
    gunSpeed = 2.5+pass*0.5;
}

void Enemy::addGun ()
{
    Plane::addGun ( Things::BUTTON );
    Sound::BUTTON.play ();
}

void Enemy::allMove ()
{
    if ( red > 0 )
        model.move ( 0, enemySpeed );
    else
    {
        if ( 5==timeDie )
        {
            red--;
            if ( 1==level )enemy1Down ();
            if ( 2==level )enemy2Down ();
            if ( 3==level )enemy3Down ();
            timeDie = 0;
        }
        timeDie++;
    }
    Plane::gunMove ( gunSpeed );
}

sf::Vector2f Enemy::getPosition ()
{
    return model.getPosition ();
}

bool Enemy::ifDie ()
{
    if ( 3 > level )
        if ( red < -3 && gun.empty () )
            return true;
    if ( 3 ==level )
        if ( red < -5 && gun.empty () )
            return true;
    return false;
}

void Enemy::enemy1Down ()
{
    if ( red == 0 )
        model.setTexture ( Things::ENEMY1_DOWN1 );
    if ( red == -1 )
        model.setTexture ( Things::ENEMY1_DOWN2 );
    if ( red == -2 )
        model.setTexture ( Things::ENEMY1_DOWN3 );
    if ( red == -3 )
        model.setTexture ( Things::ENEMY1_DOWN4 );
    if ( red == -4)
        model.setTexture ( Things::EMPTY );
}

void Enemy::enemy2Down ()
{
    if ( red == 1 )
        model.setTexture ( Things::ENEMY2_HIT );
    if ( red == 0 )
        model.setTexture ( Things::ENEMY2_DOWN1 );
    if ( red == -1 )
        model.setTexture ( Things::ENEMY2_DOWN2 );
    if ( red == -2 )
        model.setTexture ( Things::ENEMY2_DOWN3 );
    if ( red == -3 )
        model.setTexture ( Things::ENEMY2_DOWN4 );
    if ( red == -4)
        model.setTexture ( Things::EMPTY );
}

void Enemy::enemy3Down ()
{
    if ( red == 2 )
        model.setTexture ( Things::ENEMY3_HIT1 );
    if ( red == 1 )
        model.setTexture ( Things::ENEMY3_HIT2 );
    if ( red == 0 )
        model.setTexture ( Things::ENEMY3_DOWN1 );
    if ( red == -1 )
        model.setTexture ( Things::ENEMY3_DOWN2 );
    if ( red == -2 )
        model.setTexture ( Things::ENEMY3_DOWN3 );
    if ( red == -3 )
        model.setTexture ( Things::ENEMY3_DOWN4 );
    if ( red == -4 )
        model.setTexture ( Things::ENEMY3_DOWN5 );
    if ( red == -5 )
        model.setTexture ( Things::ENEMY3_DOWN6 );
    if ( red == -6)
        model.setTexture ( Things::EMPTY );
}

void Enemy::beShoted ()
{
    Plane::beShoted ();
    if ( red==0 )
    {
        Text::ans++;
        if ( 1==level )
        {
            Sound::ENEMY1_DOWN.play();
        }
        if ( 2==level )
        {
            Sound::ENEMY2_DOWN.play();
            Text::ans++;
        }
        if ( 3==level )
        {
            Sound::ENEMY3_DOWN.play();
            Text::ans += 4;
        }
    }
    else
    {
        if ( level == 2 )
            enemy2Down ();
        if ( level == 3 )
            enemy3Down ();
    }
}

Enemy::~Enemy()
{
    //dtor
}
