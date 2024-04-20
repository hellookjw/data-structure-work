#pragma once
#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE];

int isEmpty();
int isFull();
void push(element item);
element pop();
element peek();
void printStack();
