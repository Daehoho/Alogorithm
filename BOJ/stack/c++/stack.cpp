#include <cstdio>
template <typename T>
class Stack {
    T* arr;
    int size;
    int top;
    Stack(int s) {
        size = s;
        arr = new T[size];
        top = 0;
    } 

    void push(T data) {
        if(top >= size) { printf("Size Over"); }
        arr[top++] = data;
    } 

    T pop() {
        if(top == 0) { printf("No Element"); }
        arr[--top] = 0;
    }
}
