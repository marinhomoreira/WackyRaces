// File 482.cpp
// Solution for the UVa #482 problem, available at
// https://uva.onlinejudge.org/external/4/482.html
// author: Marinho Moreira

#include <cstdio>
#include <vector>
#include <string>
#define INF 20000
using namespace std;

typedef vector<int> vi;
char vals[INF][INF];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i>0) printf("\n");

        vi p;
        int index;
        while(scanf("%d", &index)){
            p.push_back(index);
            if(getchar() == '\n') break;
        }

        int num_of_elems = p.size();
        for(int i=0; i < num_of_elems; i++)
        {
            int actualIndex = p[i]-1;
            char value[INF];
            scanf("%s", &vals[actualIndex]);
        }

        for (int i = 0; i < num_of_elems; i++) {
            printf("%s\n", vals[i]);
        }
    }
    return 0;
}
