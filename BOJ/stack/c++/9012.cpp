#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;
void isVPS (char* str) ;

int main (void) {
    int num;
    char str[51];
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        scanf("%s", str);
        isVPS(str);
    }
    return 0;
}

void isVPS (char* str) {
    int len = strlen(str);
    stack<char> st;
    for(int i = 0; i < len; i++) {
        if(str[i] == '(') {
            st.push(str[i]);
        } else {
            if(st.empty()) {
                printf("NO\n");
                return;
            } else {
                st.pop();
            }
        }
    }
    if(st.empty()) 
        printf("YES\n");
    else 
        printf("NO\n");
}
