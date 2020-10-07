// FlowExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int answer = 14;
    int input;
    int choice;
    bool flag = true;

    cout << "Welcome to the Guessing Game!\n";
    while (flag) 
    {
        cout << "Enter your guess: ";
        cin >> input;
        if (input == answer)
        {
            cout << "Congratulations, you got the right number!!!\n";
            cout << "Do you want to play again? (0 - no, 1 - yes): ";
            cin >> choice;
            if (choice == 0)
            {
                cout << "Exiting...\n\n";
                flag = false;
            }
        }
        else if (input > answer)
        {
            cout << "Your guess is greater than the right number.\n";
        }
        else
        {
            cout << "Your guess is smaller than the right number\n";
        }
    }

}

