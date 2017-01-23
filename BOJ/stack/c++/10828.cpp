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
        size += 1;
    }

    int pop() {
        if(empty()) {
            return -1;
        } else {
            size -= 1;
            return data[size];
        }
    }

    bool empty() {
        if(size == 0) {
            return true;
        } else {
            return false;
        }
    }

    int top() {
        if(!empty()) {
            return data[size-1];
        } else {
            return -1;
        }
    }
};

int main (void) {
    int N;
    char cmd[10];
    int num;
    Stack s;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%s", cmd);

        if(!strcmp(cmd, "push")) {
            scanf("%d", &num);
            s.push(num);
        } else if(!strcmp(cmd, "top")){
            printf("%d\n",s.top());
        } else if(!strcmp(cmd, "size")) {
            printf("%d\n",s.size);
        } else if(!strcmp(cmd, "pop")) {
            printf("%d\n",s.pop());
        } else {
            if(s.empty()) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }

    return 0;
}
