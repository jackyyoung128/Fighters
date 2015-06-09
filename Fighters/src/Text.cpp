#include "Text.h"

sf::Text Text::score;
sf::Text Text::life;
int Text::ans;

void Text::load ()
{
    ans = 0;
    score.setFont( Things::SCORE_FONT );
    score.setCharacterSize(20);
    score.setColor(sf::Color::Black);

    life.setFont( Things::LIFE_FONT );
    life.setCharacterSize(20);
    life.setColor(sf::Color::Red);
    life.setPosition ( 180, 0);
}

void Text::outText ( sf::RenderWindow& window, int red)
{
    char s1[40];
    sprintf ( s1, "  SCORE : %d", ans );
    score.setString ( s1 );

    wchar_t s2[40];
    int i;
    for ( i=0; i<red; i++ )
        s2[i] = L'❤';
    s2[i] = '\0';
    life.setString ( s2 );

    window.draw ( score );
    window.draw ( life );
}
