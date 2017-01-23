#include <cstdio>
#include <memory.h>
#include <vector>

using namespace std;

vector<int> graphList[501];
int visit[501];
int n,m;
int cnt = 0;

void find (int s);

void show(int s) {
    printf("visit[%d]: ", s);
    printf("[ ");
    for(int i = 0; i <= n; i++) {
        printf("[%d] %d ", i, visit[i]);
    }
    printf(" ] \n");
}

int main () 
{
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

    for(int j = 0; j < graphList[1].size(); j++) {
        int t = graphList[1][j];

        if(visit[t] == 1) {
            continue;
        } else {
            visit[t] = 1;
            cnt ++;
        }
    }
    //show(1);

    int temp[n+1];
    memset(temp, 0, sizeof(temp));
    for(int i = 2; i <= n; i++) {
        if(visit[i] == 1) {
            temp[i] = 1;
        }
    }
    /*
    show(2);
    
    printf("temp: ");
    printf("[ ");
    for(int i = 0; i <= n; i++) {
        printf("[%d]: %d ", i, temp[i]);
    }
    printf(" ] \n");
*/
    for(int i = 2; i <= n ; i++) {
        if(temp[i] == 1) {
            find(i);
        }
    }

    printf("%d\n", cnt);

    return 0;
}

void find (int s) {
    for(int i = 0; i < graphList[s].size(); i++) {
        int t = graphList[s][i];
        if (visit[t] == 1) {
            continue;
        } else {
            visit[t] = 1;
            cnt ++;
        }
 //       show(3);
    }
}

