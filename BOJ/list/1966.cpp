#include <cstdio>
#include <queue>

using namespace std;

void print(int *P, int N, int M);

int main (void) {
    int num;
    int N, M;
    int P[101];
    int temp;
    scanf("%d", &num);

    for(int i = 0; i < num ; i++) {
        scanf("%d %d", &N, &M);
        for(int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }
        print(P, N, M);
    }
    return 0;
}

void print (int *P, int N, int M) {
    queue<int> q;
    int temp = P[M];
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(temp < P[i]) {
            count++;
        }
        q.push(P[i]);
    }

    while(1) {

    }
    printf("%d\n", count);
}


