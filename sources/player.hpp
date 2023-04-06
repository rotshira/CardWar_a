#ifndef Player_HPP
#pragma once
#define Player_HPP
# include <fstream>
#include <iostream>
#include <string>
using namespace std;
namespace ariel
{
    class Player
    {
        private:
        string name;//field

        public: //function
        Player(string name); 
        int stacksize();
        int cardesTaken();
        void set_Name(string);
        string get_Name();
    };
}
#endif