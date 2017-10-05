// File: arrayClassMember.cpp
// Created by Dayton Baxter on 10/3/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
const int MAX = 10;

class Stack
{
private:
    int st[MAX]; //stack: array of ints
    int top;     //number on top of stack

public:
    Stack() //Constructor
    {
        top = -1;
    }
    void push(int var) //put number on stack
    {
        st[++top] = var; //Good example of adding before using the variable
    }
    int pop() //take number off stack
    {
        return st [top--];
    }
};

// Prototypes

// Main Program Program
int main()
{
    Stack s1;

    s1.push(11);
    s1.push(44);
    s1.push(12);
    s1.push(31);
    s1.push(94);
    s1.push(144);

    cout << " 1 " << s1.pop() << endl;
    cout << " 2 " << s1.pop() << endl;
    cout << " 3 " << s1.pop() << endl;
    cout << " 4 " << s1.pop() << endl;

    return 0;

}

// Function Definitions