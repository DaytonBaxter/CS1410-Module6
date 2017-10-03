// File: multiDArray
// Created by Dayton Baxter on 10/3/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
const int ROWS = 3;
const int COL = 3;

// Prototypes
void AgeInput(int iage[ROWS][COL]);
void ShowAge(int iage[ROWS][COL]);
//void AgeInput(int iage[][COL]);

// Main Program Program
int main()
{
    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2, 3}, {21, 22, 23}, {31, 32, 33}};

    AgeInput(age);
    ShowAge(age);

    return 0;

}

// Function Definitions
void AgeInput(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Enter your age " << endl;
            cin >> iage[i][j];
        }
        cout << endl;
    }
}
void ShowAge(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "age is " << iage[i][j] << endl;
        }
        cout << endl;
    }
}