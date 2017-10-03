#include <iostream>
using namespace std;

const int SIZE = 3;

//Prototypes
//Arrays are passed by reference
void AgeInput(int iage[SIZE]);
void ShowAge(int iage[SIZE]);
//void AgeInput(int iage[]); (another notation)

int main()
{
    /*Define an array of 3 integers */
    int age[SIZE];
    //Declare and initialize an array of members
    int age2[SIZE] = {99, 21, 33};

    AgeInput(age);
    ShowAge(age);


    return 0;
}

//Function definitions
void AgeInput(int iage[SIZE])
{
    //Take input
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age" << endl;
        cin >> iage[i];
    }

    return;

}
void ShowAge(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << iage[i] << endl;
    }
    cout <<"Done!" << endl;
}