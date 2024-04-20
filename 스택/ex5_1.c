#include <stdio.h>
#include <stdlib.h>
#include "stackS.h"

int main() {
    element item;
    printf("\n** 순차 스택 연산 **\n");
    printStack(); // 초기 상태 출력

    push(1);
    printStack();
    push(2);
    printStack();
    push(3);
    printStack();

    item = peek(); printStack();
    printf("\npeek => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);
    printfStack();

    item = pop(); printStack();
    printf("\t pop => %d", item);
    printfStack();

    item = pop(); printStack();
    printf("\t pop => %d", item);
    printfStack();

    getchar();  return 0;
}
