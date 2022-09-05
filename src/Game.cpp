//
// Created by anton on 9/1/22.
//

#include "includes.h"

int lives = 0;
void Game::Run(bool playing)
{
    while(playing == true)
    {
        GameOver(0);
        int answer = Rand();
        std::cout << answer << "\n";
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
    std::srand(time(0));
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
    std::cout << "Lives at: " << lives << "\n";
    if(lives <= 0 )
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
        std::cout << ("Hello this is a guessing game try to print a number then press enter: ");
    }
    else if(dialog == 1)
    {
        std::cout << ("Your right your score is now: ") << score(0) << ("k");
    }
    else if(dialog == 2)
    {
        std::cout << ("Your guess is too high! Please try again:  ");
    }
    else if(dialog == 3)
    {
        std::cout << ("Your guess is too low! Please try again:  ");
    }
    else if(dialog == 4)
    {
        std::cout << ("Do you want to play again press 1 if not press 0 and then the enter button: ");
    }
}
int Game::score(bool reset)
{
    int Score;
    if(reset == false)
    {
        Score =+ 1;
    }
    else
    {
        Score = 0;
    }
    return Score;
}