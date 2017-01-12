#include <cstdio>
#include <vector>
#include <memory.h>

using namespace std;
vector<int> a[110];
int check[110];

void virus(int s);

int main (void) {
    int N;
    int P;
    int count = 0;
    memset(check, 0, sizeof(check));

    scanf("%d", &N);
    scanf("%d", &P);

    for(int i = 0; i < P; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    check[1] = true;
    virus(1);

    for(int i = 2; i <= N; i++) {
        if(check[i] == 1) 
            count++;
    }

    printf("%d", count);
    return 0;
}

void virus(int s) {
    int tnum;
    for(int i = 0; i < a[s].size(); i++) {
        tnum = a[s][i];
        if(check[tnum] == 0) {
            check[tnum] = 1;
            virus(tnum);
        } 
    }
}
