#include <cstdio>
#include <stack>
#include <cstring>

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

    for(int i = 0; i < strlen(str); i++) {
        switch(str[i])  {
            case '<' :
                if (st1.empty()) 
                    break;
                temp = st1.top();
                st1.pop();
                st2.push(temp);
                break;
            case '>' :
                if (st2.empty())
                    break;
                temp = st2.top();
                st2.pop();
                st1.push(temp);
                break;
            case '-' :
                if (st1.empty())
                    break;
                st1.pop();
                break;
            default:
                st1.push(str[i]);
                break;
        }
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
}

