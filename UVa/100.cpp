// File UVa100.cpp
// Solution for the UVa #100 problem, available at
// https://uva.onlinejudge.org/external/1/100.html
// author: Marinho Moreira

#include <fstream>
#include <iostream>
using namespace std;

int calcCycle(int original);
int calcMaxCycle(int i, int j);

int main(int argc, char const *argv[]) {
    int i, j;
    while(scanf ("%d %d", &i, &j) != EOF)
    {
        int max = calcMaxCycle(i, j);
        printf ("%d %d %d\n", i, j, max);
    }
    return 0;
}

int calcMaxCycle(int i, int j)
{
    if (i > j) swap (i, j);
    int maxCycle = 0;
    for (int current = i; current <= j; current++) {
        int currentCycle = calcCycle(current);
        if (maxCycle < currentCycle) {
            maxCycle = currentCycle;
        }
    }
    return maxCycle;
}

int calcCycle(int original) {
    unsigned int n = original;
    int cycle = 1;
    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        cycle++;
    }
    return cycle;
}
