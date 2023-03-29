#ifndef CARD_HPP
#pragma once
#define CARD_HPP
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    class Card
    {
        private:
        int number; //fields
        string pattern; //fields
///////////////////////////////////////////////////////////////////////
        public:
        Card(int number, string pattern); //constructor
        //get && set
        void set_number(int);
        int get_number();
        void set_pattern(string);
        string get_pattern(string);
    
    };
}

#endif