#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

int main (void) {
    stack<char> st;
    char iStr[1000001];
    char B[37];
    int sLen;
    int bLen;

    scanf("%s %s", iStr, B);
    
    sLen = strlen(iStr);
    bLen = strlen(B);

    for(int i = 0; i < sLen; i++) {
        if(B[bLen] == iStr[i]) {
            for(int i = bLen; i > 0; i--) {

            }
        } else {
            st.push(iStr[i]);
        }
    }
    return 0;
}
