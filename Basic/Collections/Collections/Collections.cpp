// Collections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main()
{
    vector<int> nums;

    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }

    for (auto item : nums)
    {
        cout << item << " ";
    }

    vector<string> words;

    cout << "\nEnter three words: ";
    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        words.push_back(str);
    }

    //for (auto word : words)
    //{
    //    cout << word << ", ";
    //}

    sort(begin(words), end(words));
    for (auto word : words)
    {
        cout << word << ", ";
    }

    
    return 0;
}
