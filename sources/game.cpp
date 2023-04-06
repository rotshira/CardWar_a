#include "card.hpp"
#include "player.hpp"
#include "game.hpp"
#include <iostream>
using namespace ariel;
using namespace std;


Game::Game(Player player1, Player player2) : play1(player1),play2(player2)
{
    play1 = player1;
    play2 = player2;
    play1 = Player(play1.get_Name());
    play2 =  Player(play2.get_Name());

}

//the function without implementation
void Game::playTurn()
{
   
}
void Game::playAll()
{
   
}

void Game::printLog()
{
   
}
void Game::printWiner()
{
   
}
void Game::printStats()
{
   
}
void Game::printLastTurn()
{
   
}