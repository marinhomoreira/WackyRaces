// File 739.cpp
// Solution for the UVa #739 problem, available at
// https://uva.onlinejudge.org/external/7/739.html
// author: Marinho Moreira

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string getSoundex(string);
int getCode(char);

int main() {
    string name;
    int firstCol = 10;
    int secondCol = 35;

    printf("%9s%-25s%s\n", "", "NAME", "SOUNDEX CODE");

    while(getline(cin, name))
    {
        string sc = getSoundex(name);
        printf("%9s%-25s%s\n", "", name.c_str(), sc.c_str());
    }
    printf("%19s%s\n", "", "END OF OUTPUT");
    return 0;
}

string getSoundex (string name)
{
    string soundex;
    soundex += name[0]; // first letter remains
    for(int i = 1; i < name.length(); i++)
    {
        int code = getCode(name[i]);
        if (code != getCode(name[i-1]) && code != 0)
            soundex += to_string(code);
    }
    soundex.replace(soundex.length(), 4, "000");
    if(soundex.length() > 4) soundex = soundex.substr(0, 4);
    return soundex;
}

int getCode(char c)
{
    switch(c) {
        case 'B':
        case 'P':
        case 'F':
        case 'V':
            return 1;
        case 'C':
        case 'S':
        case 'K':
        case 'G':
        case 'J':
        case 'Q':
        case 'X':
        case 'Z':
            return 2;
        case 'D':
        case 'T':
            return 3;
        case 'L':
            return 4;
        case 'M':
        case 'N':
            return 5;
        case 'R':
            return 6;
        default:
            return 0;
    }
}
