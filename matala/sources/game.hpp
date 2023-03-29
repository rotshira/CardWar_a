#ifndef GAME_HPP
#pragma once
#define GAME_HPP
#include "player.hpp"
# include <fstream>
#include <iostream>
#include <string>
namespace ariel
{
    class Game
    {
        private: 
        Player play1;
        Player play2;
        
        public:
        Game(Player player1, Player player2);
        Game();
        void playTurn(); //function
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}

#endif