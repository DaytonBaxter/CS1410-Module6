#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    /*Define an array of 3 integers */
    int age[SIZE];
    //Take input
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age" << endl;
        cin >> age[i];
    }


    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << age[i] << endl;
    }
    cout <<"Done!" << endl;

    return 0;
}