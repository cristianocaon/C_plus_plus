// Flow Control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    // > < >= <= == !=

    int firstNumber;
    int secondNumber;
    bool flag = true;
    int answer;

    while (flag) 
    {
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ".\nEnter another number: ";
        cin >> secondNumber;

        if (firstNumber < secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is less than the second number " << secondNumber << ".\n";
        }
        else if (firstNumber > secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is greater than the second number " << secondNumber << ".\n";
        }
        else
        {
            cout << "The first number, " << firstNumber << ", is equal to the second number " << secondNumber << ".\n";
        }

        cout << "Do you want to compare another pair? 0 means no, 1 means years: ";
        cin >> answer;
        
        if (answer == 0)
        {
            cout << "Exiting...\n\n";
            flag = false;
        }
    }
    

    return 0;
}
