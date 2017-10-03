// File: structArray.cpp
// Created by Dayton Baxter on 10/3/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
struct Part
{
    int modelNumber;
    int partNumber;
    float cost;
};

const int SIZE = 4;

// Prototypes
void partInput(struct Part ipart[SIZE]);

// Main Program Program
int main()
{
    Part p[SIZE];

    partInput(p);

    return 0;

}

// Function Definitions
void partInput(struct Part ipart[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >> ipart[i].modelNumber;

        cout << "Enter part number: ";
        cin >> ipart[i].partNumber;

        cout << "Enter part cost: ";
        cin >> ipart[i].cost;

        cout << endl;
    }
}