#include <cstdio>
#include <stack>
#include <cstring>
#include <memory.h>

using namespace std;

void logger(char * str);

int main () {
    int num;
    char str[1000010];

    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        scanf("%s", str);
        logger(str);
    }
    return 0;
}

void logger (char * str) {
    stack<char> st1;
    stack<char> st2;
    char temp;
    char tStr[1000010];
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] == '<') {
            if (st1.empty()) 
                continue;
            temp = st1.top();
            st1.pop();
            st2.push(temp);
        } else if (str[i] == '>') {
            if (st2.empty())
                continue;
            temp = st2.top();
            st2.pop();
            st1.push(temp);
        } else if (str[i] == '-') {
            if (st1.empty())
                continue;
            st1.pop();
        } else {
            st1.push(str[i]);
        }
    }

    while(1) {
        if(st2.empty())
            break;
        temp = st2.top();
        st2.pop();
        st1.push(temp);
    }

    int cnt = 0;
    while(1) {
        if(st1.empty()) 
            break;
        tStr[cnt] = st1.top();
        st1.pop();
        cnt++;
    }

    for(int i = strlen(tStr); i >= 0 ; i--) {
        printf("%c", tStr[i]);
    }
    printf("\n");
    for(int i = strlen(tStr); i >= 0 ; i--) {
        tStr[i] = '\0';
    }
}
