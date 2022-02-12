/*
    author: Dawson Dauphinais
    dawsondauphinais43@gmail.com

    date last modified: 2/11/2022
*/

#include "../include/Roman.h"

void Roman::set_precalculated(vector<pair<int, string>> &v)
{
    v.push_back({1, "I"});
    v.push_back({4, "IV"});
    v.push_back({5, "V"});
    v.push_back({9, "IX"});
    v.push_back({10, "X"});
    v.push_back({40, "XL"});
    v.push_back({50, "L"});
    v.push_back({90, "XC"});
    v.push_back({100, "C"});
    v.push_back({400, "CD"});
    v.push_back({500, "D"});
    v.push_back({900, "CM"});
    v.push_back({1000, "M"});
}

string Roman::intToRoman(int num)
{
    string res;
    vector<pair<int, string>> vec;
    Roman::set_precalculated(vec);
    auto size = vec.size();
    while (num > 0 && size > 0)
    {
        int t = num / (vec[size - 1].first);
        num = num % (vec[size - 1].first);
        for (int i = 0; i < t; i++)
        {
            res += vec[size - 1].second;
        }
        size--;
    }
    return res;
}

int Roman::romanToInt(string s)
{
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // if the current letter is 'I'

        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                result += 4;
            }
            else if (s[i + 1] == 'X')
            {
                result += 9;
            }
            else
            {
                result++;
            }
        }

        // if the current letter is V
        if (s[i] == 'V')
        {
            if (i == 0 || s[i - 1] != 'I')
            {
                result += 5;
            }
        }

        // if the current letter is 'X'
        if (s[i] == 'X')
        {
            if (i == 0 || s[i - 1] != 'I')
            {
                if (s[i + 1] == 'L')
                {
                    result += 40;
                }
                else if (s[i + 1] == 'C')
                {
                    result += 90;
                }
                else
                {
                    result += 10;
                }
            }
        }

        // if the current letter is 'L'
        if (s[i] == 'L')
        {
            if (i == 0 || s[i - 1] != 'X')
            {
                result += 50;
            }
        }

        // if the current letter is 'C'
        if (s[i] == 'C')
        {
            if (i == 0 || s[i - 1] != 'X')
            {
                if (s[i + 1] == 'D')
                {
                    result += 400;
                }
                else if (s[i + 1] == 'M')
                {
                    result += 900;
                }
                else
                {
                    result += 100;
                }
            }
        }

        // if the current letter is 'D'
        if (s[i] == 'D')
        {
            if (i == 0 || s[i - 1] != 'C')
            {
                result += 500;
            }
        }

        // if the current letter is 'M'
        if (s[i] == 'M')
        {
            if (i == 0 || s[i - 1] != 'C')
            {
                result += 1000;
            }
        }
    }
    return result;
}
