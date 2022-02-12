/*
    author: Dawson Dauphinais
    dawsondauphinais43@gmail.com

    date last modified: 2/11/2022
*/

#include <iostream>
#include <bits/stdc++.h>
#include "../include/Roman.h"

using namespace std;

void RNI()
{
    string s;
    cout << "Enter the roman numeral." << endl;

    int res = Roman::romanToInt(s);
    cout << s << " = " << res << endl;
}

void IRN()
{
    int n;
    cout << "Enter an integer." << endl;
    cin >> n;
    string res = Roman::intToRoman(n);
    cout << n << " = " << res << endl;
}

int main()
{
    bool run = true;
    int choice;
    while (run)
    {
        cout << "***********************" << endl;
        cout << "1. Convert Roman Numeral to Integer" << endl;
        cout << "2. Convert Integer to Roman Numeral" << endl;
        cout << "3. Exit" << endl;
        cout << "***********************" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            RNI();
            break;
        case 2:
            IRN();
            break;
        case 3:
            run = false;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    }
    return 0;
}
