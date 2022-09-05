//
// Created by anton on 9/1/22.
//
#pragma once

class Game {
public:
    void Run(bool playing);
    void InitGame();
    int Rand();
    int input();
    void calc(int input, int correctNumber);
    bool GameOver(int wrong);
    void Print(int dialog);
    int score(bool reset);
};

