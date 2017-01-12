#include <cstdio>
#include <cstring>
#include <memory.h>


int leftPos, rightPos;
char leftStack[1000010], rightStack[1000010];

void left(){
    if(leftPos==0)
        return;
    rightStack[rightPos++] = leftStack[--leftPos];
    leftStack[leftPos]='\0';
}

void right(){
    if(rightPos==0)
        return;
    leftStack[leftPos++] = rightStack[--rightPos];
    rightStack[rightPos]= '\0';
}

void backspace(){
    if(leftPos==0)
        return;
    leftStack[--leftPos] = '\0';

}

void push(char word){
    leftStack[leftPos++] = word;
}

int main(void){


    int test_case, cur;
    char password[1000010];
    scanf("%d", &test_case);

    for(int i=0; i<test_case; i++){
        memset(password, 0, sizeof(password));
        memset(leftStack, 0, sizeof(leftStack));
        memset(rightStack, 0, sizeof(rightStack));
        cur=0;
        leftPos = rightPos = 0;

        scanf("%s", password);
        while(password[cur] !='\0'){
            if(password[cur] =='<')
                left();
            else if(password[cur] == '>')
                right();
            else if(password[cur] == '-')
                backspace();
            else{
                push(password[cur]);
            }
            cur++;
        }

        int leftLen = strlen(leftStack);
        int rightLen = strlen(rightStack);

        for(int i=0; i < leftLen; i++){
            printf("%c", leftStack[i]);
        }

        for(int i=rightLen-1; i >= 0; i--){
            printf("%c", rightStack[i]);
        }
        printf("\n");

    }

    return 0;
}
