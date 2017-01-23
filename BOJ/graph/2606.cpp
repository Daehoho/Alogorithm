#include <cstdio>
#include <vector>
#include <memory.h>

using namespace std;

vector<int> graphList[101];
int visit[101];
int n, m;
int cnt = 0;

void dfs(int s);
int main (void) {
    memset(visit, 0, sizeof(visit));

    scanf("%d", &n);
    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        graphList[u].push_back(v);
        graphList[v].push_back(u);
    }
    visit[1] = 1;

    dfs(1);

    printf("%d", cnt);

    return 0;
}

void dfs (int s) {
    for(int i = 0; i < graphList[s].size(); i++) {
        int temp = graphList[s][i];

        if(visit[temp] == 1) {
            continue;
        } else {
            visit[temp] = 1;
            cnt++;
            dfs(temp);
        }
    }
}


