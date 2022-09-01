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

void Game::Run()
{

    int answer = rand();
    int Input;
    int HighLowRight;
    while (GameOver(2) == false)
    {
        Input = input();
        HighLowRight = calc(Input, answer);
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
int Game::calc(int input, int correctNumber)
{
    if(input == correctNumber)
    {
        return 1;
    }
    else if(input >> correctNumber)
    {
        return 2;
    }
    else if(input << correctNumber)
    {
        return 3;
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
    {

    }
    if(lives == 0)
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