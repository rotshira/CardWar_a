#include "card.hpp"
#include "player.hpp"
#include "game.hpp"
using namespace ariel;
using namespace std;
// construcuer
Player::Player(string name)
{
    this->name = name;
}
//function
int Player::stacksize(){ 
return 26;
}
int Player::cardesTaken(){ 
return 0;
}
// set void
void Player::set_Name(string str)
{
    this->name = str;
}
  //get      
string Player::get_Name()
{
    return this->name;
}