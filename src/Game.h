//
// Created by anton on 9/1/22.
//
#pragma once

class Game {
public:
    void Run(bool playing);
    void initGame();
    int Rand();
    int input();
    void calc(int input, int correctNumber);
    bool GameOver(int wrong);
    void Print(int dialog);
    int score(bool reset);
private:
    int lives = 0;
    int answer;
    int Input;
    int temp = 0;
    int Score = 0;
    int randomNumber;
    bool roundIsPlaying = true;
};

