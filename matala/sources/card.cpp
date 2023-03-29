#include "card.hpp"
#include "player.hpp"
#include "game.hpp"
#include <string>
#include <cmath>
using namespace ariel;

Card::Card(int number, string pattern) // constructor
{
    this->number = number;  //enter
    this->pattern = pattern;
}

