#include <cstdio>
#include <vector>
#include <queue>

using namespace std;


int V, E;
int u, v, w;
int k;

vector<pair<int,int> > graphList[20000];
priority_queue<int, vector<int>, greater<int> > pq;

int main (void) {
    scanf("%d %d", &V, &E);
    scanf("%d", &k);
    
    for(int i = 0; i < E; i++) {
        scanf("%d %d %d", &u, &v, &w);
        graphList[u].push_back(make_pair(v,w));
    }


    for(int i = 0; i < E; i++) {
        for(int j = 0; j < graphList[i].size(); j++) {
            printf("s: %d e: %d c: %d \n", i, graphList[i][j].first, graphList[i][j].second);
        }
    }

    return 0;
}
