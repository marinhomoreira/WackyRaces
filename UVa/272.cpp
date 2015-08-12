// File UVa272.cpp
// Solution for the UVa #272 problem, available at
// https://uva.onlinejudge.org/external/2/272.html
// author: Marinho Moreira

#include <cstdio>
using namespace std;

int main() {
    char next;
    bool left = true;
    while(scanf ("%c", &next) != EOF)
    {
        if (next == '"') {
            if (left) {
                printf ("``");
                left = false;
            } else {
                printf ("''");
                left = true;
            }
        }
        else {
            printf ("%c", next);
        }
    }
    return 0;
}
