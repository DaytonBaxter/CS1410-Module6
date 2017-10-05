// File: arrayChar
// Created by Dayton Baxter on 10/5/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
const int MAX = 80;

// Prototypes

// Main Program Program
int main()
{
    char st[MAX];

    /*
    cout << "Enter your first name: " << endl;
    cin >> st;
    cout << "Hello, " << st << endl;
     */

    //Let the compiler calculate the space
    //String constants
    char hi[] = "Hello Weber State University Students!";

    cout << hi << endl;

    //To support embedded blanks, use cin.get() function
    cout << "Enter your full name: " << endl;
    cin.get(st, MAX); //(destination, size)
    cout << "Hello, " << st << endl;


    return 0;

}

// Function Definitions