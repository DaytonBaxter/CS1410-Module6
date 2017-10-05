// File: inputOutputString.cpp
// Created by Dayton Baxter on 10/5/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
#include <string>
using namespace std;

// Constants, Classes, Structures

// Prototypes

// Main Program Program
int main()
{
    string full_name, nickname, address;

    cout << "Enter you full name: ";
    getline(cin, full_name); // take embedded blanks

    cout << "Enter your nickname: " << endl;
    cin >> nickname; //Take one string object

    cout << "Enter you address on separate lines \n";
    cout << "Terminate input with '$' \n";
    getline(cin, address, '$'); //(cin, where, terminator)

    cout << full_name << endl;
    cout << nickname << endl;
    cout << address << endl;

    return 0;

}

// Function Definitions