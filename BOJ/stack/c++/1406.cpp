#include <cstdio>
#include <stack>
#include <cstring>

int main (void) {
    stack<char> ls;
    stack<char> rs;
    char str[100000];
    int N;
    int len;
    char cmd;
    char c;

    scanf("%s", str);
    len = strlen(str);
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%c", &cmd);
        if(cmd == 'P') {
            scanf("%c", &c);
        } else if(cmd == 'L') {
        } else if(cmd == 'B') {
        } else if(cmd == 'D') {
        }
    }
}
