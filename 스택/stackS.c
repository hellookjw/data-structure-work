#include <stdio.h>
#include <stdlib.h>
#include "stackS.h"

int top = -1;

int isEmpty() {
    if (top == -1)return 1;
    else return 0;
}

int isFull() {
    if (top == STACK_SIZE - 1)return 1;
    else return 0;
}


void push(element item) {
    if (isFull()) {
        printf("\n\n stack is FULL!\n");
        return ;
    }
    else stack[++top] = item;
}

element pop() {
    if (isEmpty()) {
        printf("\n\n stack is empty!\n");
        return 0; // 빈 스택일 때 반환할 값
    }
    else
        return stack[top--];
}

element peek() {
    if (isEmpty()) {
        printf("\n\n stack is empty!\n");
        return 0;
    }
    else
        return stack[top];
}

void printStack() {
    int i;
    printf("\n STACK [");
    for (i = 0; i <= top; i++) {
        printf(" %d", stack[i]);
    }
    printf(" ]");
}

int main() {
    element item;
    top = -1; // top 초기화
    printf("\n** 순차 스택 연산 **\n");

    printStack(); // 초기 상태 출력

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
