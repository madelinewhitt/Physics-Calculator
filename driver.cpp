#include<iostream> 
#include"physics.h"
using namespace std; 

void DisplayOptions(); 

int main()
{
    cout << "----------PHYSICS-CALCULATOR----------" << endl; 
    cout << "This calculator takes information given by the user and calculates" << endl;
    cout << "the position, speed, and acceleration at time (t) using" << endl; 
    cout << "basic calculus derivation" << endl << endl; 
    cout << "**DISCLAIMER** this calculator ONLY works when dropping an object" << endl;
    cout << "it does not work when trying to calculate points for an object being thrown" << endl << endl;

    int option;
    double num;
    Physics calculate;


    DisplayOptions(); 
    cin >> option; 
    while(option != 2)
    {
        switch(option)
        {
            case 1: cout << "What is your initial starting height?" << endl;
            cin >> num;
            calculate.setyIntercept(num);
            DisplayTable(calculate);
            DisplayZero(calculate);
            DisplayOptions(); 
            cin >> option; 
            break; 
        }
    }
}

void DisplayOptions()
{
    cout << "Option 1: Calculate an object being dropped" << endl;
    cout << "Option 2: Exit the program" << endl; 
}