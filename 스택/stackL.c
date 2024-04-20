#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"

int isEmpty() // 함수 이름 수정
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(element item) {
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}

element pop() {
    element item;
    stackNode* temp = top;

    if (isEmpty()) // 함수 이름 수정
    {
        printf("\n\n stack is empty!\n");
        return 0;
    }
    else
    {
        item = temp->data;
        top = temp->link;
        free(temp);
        return item;
    }
}

element peek()
{
    if (isEmpty()) // 함수 이름 수정
    {
        printf("\n\n stack is empty!\n");
        return 0;
    }
    else
    {
        return (top->data);
    }
}

void printStack()
{
    stackNode* p = top;
    printf("\n STACK [");
    while (p)
    {
        printf(" %d", p->data);
        p = p->link;
    }
    printf(" ]");
}

