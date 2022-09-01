//
// Created by anton on 9/1/22.
//

#include "includes.h"

namespace Lib
{
    template <typename T>
    void print(T t)
    {
        std::cout << t << "\n";
    }
}


void Game::Run(bool playing)
{
    while(playing == true)
    {
        int answer = Rand();
        while (GameOver(2) == false)
        {
            calc(input(), answer);
        }
        if(GameOver(2) == true)
        {
            Print(4);
            if(input() == 1)
            {
                Run(true);
            }
            else
            {

            }
        }
    }

}

void Game::InitGame()
{
    GameOver(0);
}

int Game::Rand()
{
    return rand() % 100;
}

int Game::input()
{
    return std::cin.get();
}
void Game::calc(int input, int correctNumber)
{
    if(input == correctNumber)
    {
        Print(1);
        GameOver(0);
    }
    else if(input >> correctNumber)
    {
        Print(2);
        GameOver(1);
    }
    else if(input << correctNumber)
    {
        Print(3);
        GameOver(1);
    }
}

bool Game::GameOver(int wrong)
{
    int lives;
    if(wrong == 0)
    {
        lives = 5;
    }
    else if(wrong == 1)
    {
        lives =- 1;
    }
    else if(wrong == 2)
    {}
    else
    {}
    if(lives == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Game::Print(int dialog)
{
    if(dialog == 0)
    {
        Lib::print("Hello ");
    }
    else if(dialog == 1)
    {
        Lib::print("Hello ");
    }
    else if(dialog == 2)
    {
        Lib::print("Hello ");
    }
    else if(dialog == 3)
    {
        Lib::print("Hello ");
    }
    else if(dialog == 4)
    {
        Lib::print("Hello ");
    }
}