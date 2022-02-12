/*
    author: Dawson Dauphinais
    dawsondauphinais43@gmail.com

    date last modified: 2/11/2022
*/

#ifndef ROMAN_NUMERAL_CONVERTER_ROMAN_H
#define ROMAN_NUMERAL_CONVERTER_ROMAN_H

#include <bits/stdc++.h>

using namespace std;

class Roman
{
public:
    static int romanToInt(string s);

    static string intToRoman(int num);

private:
    static void set_precalculated(vector<pair<int, string>> &v);
};

#endif // ROMAN_NUMERAL_CONVERTER_ROMAN_H
