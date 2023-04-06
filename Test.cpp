#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
#include <iostream>
#include <string>
# include <fstream>
using namespace ariel;
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//In this assignment I used a lot of Google - stackoverflow
//and in addition in the lesson presentations.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
TEST_CASE("test - Starting a game") //The number of cards taken and available is initialized
{
    Player p1("shira1");
    Player p2("shira2");
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}

TEST_CASE("test - Creating cards")
{
    CHECK_NOTHROW(Card card(1, "Clover"));
    CHECK_NOTHROW(Card card(2, "heart"));
}


TEST_CASE("test - Creating player")
{
    CHECK_NOTHROW(Player p1("noa"));
    CHECK_NOTHROW(Player p1("Ben"));
}

TEST_CASE("test - if names is equal") 
{
     Player p1("shira");
     Player p2("shira");
     Player p3("dan");
      Game game(p1,p2);
     CHECK_EQ(p1.get_Name(), p2.get_Name());
     CHECK(p1.get_Name() != p3.get_Name());
     CHECK(p2.get_Name() != p3.get_Name());
      CHECK(p2.get_Name() == p2.get_Name());
}

TEST_CASE("test - get and set(function of player)")
{
    Player p1("ori");
    Player p2("dov");
    CHECK(p1.get_Name() == "ori");    
    CHECK(p2.get_Name() == "dov");
    p2.set_Name("tal");
    CHECK(p2.get_Name() == "tal");
}

TEST_CASE("test - Creating game")
{
    Player p1("chen");
    Player p2("elinor");
    CHECK_NOTHROW(Game game(p1,p2));
    CHECK_NOTHROW(Game game(p1,p1));
}

TEST_CASE("test - functions of game")
{
    Player p1("namma");
    Player p2("keren");
    Game game(p1,p2);
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
}

TEST_CASE("test - if have 52 cards")
{
     Player p1("jeki");
     Player p2("roni");
     Game game(p1,p2);
    int sum_card = p1.stacksize()+p2.stacksize();
    bool ans = (sum_card==52);
    CHECK(ans);
}