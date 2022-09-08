//
// Created by anton on 9/1/22.
//

#include "includes.h"

void Game::Run(bool playing)
{
    while(playing)
    {
        initGame();
        while(roundIsPlaying)
        {
            while (GameOver(2) == false) //Seeing if player has lost all lives otherwise check for input and see if its right
            {
                Input = input();
                calc(Input, answer);
            }
            if(GameOver(2) == true) //If gameover is true see if player wanna play again if not it quits otherwise it starts over
            {
                Print(4);

                if(input() == 1)
                {
                    Run(true);
                }
                else
                {
                    std::cout << "Thanks for playing!";
                    roundIsPlaying = false;
                    playing = false;
                }
            }
        }
    }

}

void Game::initGame()   //starting game with resetting lives and randomising new number
{
    GameOver(0);
    answer = Rand();
    Print(0);
}

int Game::Rand() //Randomising new number
{
    std::srand(time(0));
    randomNumber = rand() % 100;
    return randomNumber;
}

int Game::input() //Taking input
{
    std::cin >> temp;
    return temp;
}
void Game::calc(int input, int correctNumber)   //Seeing if input is correct, to low or too high
{
    if(input == correctNumber)
    {
        GameOver(0);
        Print(1);
        answer = Rand();
    }
    else if(input > correctNumber)
    {
        GameOver(1);
        Print(2);
    }
    else if(input < correctNumber)
    {
        GameOver(1);
        Print(3);

    }
}

bool Game::GameOver(int wrong) //Keeping tabs of the lives and if lives reach zero it sends player to see if it wants to play again
{
    if(wrong == 0)
    {
        lives = 10;
    }
    else if(wrong == 1)
    {
        lives -= 1;
    }
    if(lives <= 0 )
    {
        score(1);
        return true;
    }
    else
    {
        return false;
    }
}

void Game::Print(int dialog)    //A function to keep all couts in
{
    if(dialog == 0)
    {
        std::cout << "Hello this is a guessing game try to print a number then press enter: ";
    }
    else if(dialog == 1)
    {
        std::cout << "Your right! your score is now: " << score(0) << "\n";
    }
    else if(dialog == 2)
    {
        std::cout << "Your guess is too high! You have " << lives << " lives left so please try again: ";
    }
    else if(dialog == 3)
    {
        std::cout << "Your guess is too low! You have " << lives << " lives left so please try again: ";
    }
    else if(dialog == 4)
    {
        std::cout << "\nDo you want to play again press 1 if not press 0 and then the enter button: ";
    }
}
int Game::score(bool reset) //increase or reset score
{
    if(reset == false)
    {
        Score += 1;
    }
    else
    {
        Score = 0;
    }
    return Score;
}