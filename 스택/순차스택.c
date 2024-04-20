#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

typedef int element;

element stack[STACK_SIZE];
int top = 0;

int isEmpty() {
    return top == 0;
}

int isFull() {
    return top == STACK_SIZE;
}

void printStack() {
    int i;
    printf("\n STACK [");
    for (i = 0; i < top; i++) { 
        printf(" %d", stack[i]);
    }
    printf(" ]");
}

void push(int item) {
    if (isFull()) {
        printf("\n\n stack is FULL!\n");
        return;
    }
    else
        stack[top++] = item; 
}

element pop() {
    if (isEmpty()) {
        printf("\n\n stack is empty!\n");
        return -1; // 빈 스택일 때 반환할 값
    }
    else
        return stack[--top]; 
}

element peek() {
    if (isEmpty()) {
        printf("\n\n stack is empty!\n");
        exit(1);
    }
    else
        return stack[top - 1]; 
}

int main() {
    element item;
    top = 0; 
    printf("\n** 순차 스택 연산 **\n");

    printfStack(); 

    push(1); 
    printfStack();
    push(2); 
    printfStack();
    push(3);
    printfStack();

    item = peek(); 
    printf("\npeek => %d", item);

    item = pop(); 
    printf("\n\t pop => %d", item);
    printfStack();

    item = pop(); 
    printf("\n\t pop => %d", item);
    printfStack();

    item = pop(); 
    printf("\n\t pop => %d", item);
    printfStack();
    
    return 0;
}
