#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

void laser(char *str);

int main (void) {
    char str[100000];

    scanf("%s", str);

    laser(str);

    return 0;
}

void laser(char *str) {
    stack<char> st;
    int len = strlen(str);
    int count = 0;
    int flag = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] == '(') {
            if(str[i+1] == ')') {
                if(st.empty()) {
                    flag = 1;
                    continue;
                } else {
                    flag = 1;
                    count += st.size();
                    continue;
                }
            } else {
                st.push(str[i]);
            }
        } else {
            if(flag == 1) {
                flag = 0;
                continue;
            } else {
                if(st.empty()) {
                    continue;
                } else {
                    count += 1;
                    st.pop();
                }
            }
        }
    }

    printf("%d\n", count);
}
