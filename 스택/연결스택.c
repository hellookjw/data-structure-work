#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct stackNode {
    element data;
    struct stackNode* link;
} stackNode;

stackNode* top;

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
        printf("\n\n 스택이 비어있습니다!\n");
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
        printf("\n\n 스택이 비어있습니다!\n");
        return 0;
    }
    else
    {
        return top->data;
    }
}

void printStack()
{
    stackNode* p = top;
    printf("\n STACK [");
    while (p != NULL)
    {
        printf(" %d", p->data);
        p = p->link;
    }
    printf(" ]");
}

int main()
{
    element item;
    top = NULL;
    printf("\n** 연결 스택 연산 **\n");
    printStack(); // 처음 스택 출력
    push(1); printStack();
    push(2); printStack();
    push(3); printStack();

    item = peek(); printStack();
    printf("peek => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);
    return 0;
}
