#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int main (void) {
    int N, M;
    int num[5000];
    int i;
    int cnt;
    int temp;
    int front, end;

    queue<int> q;
    queue<int> result;

    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++) 
        q.push(i);
    cnt = 1;
    while(1) {
        if(q.empty())
            break;
        if(cnt == M){
            temp = q.front();
            q.pop();
            result.push(temp);
            cnt = 0;
        } else {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        cnt++;
    }

    front = result.front();
    end = result.back();
    while(1) {
        if(result.empty())
            break;
        temp = result.front();
        result.pop();
        if(front == end) {
            printf("<%d>",temp);
            break;
        }
        if(front == temp)
            printf("<%d", temp);
        else if(end == temp)
            printf(", %d>", temp);
        else 
            printf(", %d", temp);

    }
}

