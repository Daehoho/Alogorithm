#include <cstdio>
#include <cstring>

using namespace std;

struct Stack {
    int data[10000];
    int size;
    Stack() {
        size = 0;
    } 
    void push(int num) {
        data[size] = num;
        size +=1;
    }
};

int main (void) {
    int N;
    char cmd[10];
    int num;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", cmd);
        if(strcmp(cmd, "push")) {
            scanf("%d", &num);
        } else if(strcmp(cmd, "top")){
        } else if(strcmp(cmd, "size")) {
        } else if(strcmp(cmd, "pop")) {
        } else {
        }
    }

    printf("String: %s\n", cmd);
    for(int i = 0; i < 10; i++) {
        printf("%c", cmd[i]);
    }
    return 0;
}
