#include <cstdio>
using namespace std;
int ONE = 0;
int ZERO = 0;

int fibo(int n);
int main() {
    int T;
    int N;

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        fibo(N);
        printf("%d %d\n", ZERO, ONE);
        ZERO=0;
        ONE=0;
    }

    return 0;
}

int fibo (int n) {
    if(n == 0) {
        ZERO++;
        return 0;
    } else if(n == 1) {
        ONE++;
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}
