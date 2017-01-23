#include <cstdio>
#include <vector>

using namespace std;

vector<pair<int,int> > graphList[500];
int main (void) {
    int N, M;
    int s, e, c;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++) {
        scanf("%d %d %d", &s, &e, &c);
        graphList[s].push_back(make_pair(e,c));
        graphList[s].push_back(make_pair(s,c));
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < graphList[i].size(); i++) {
            printf("s: %d e: %d c: %d\n", );
        }
    }
    return 0;
}
