#include "stack.h"
#include <stdlib.h>

#define length(arr) (sizeof (arr) / sizeof *(arr))

int printf(const char *, ...);
_Bool overflow(Stack *);
_Bool underflow(Stack *);

struct Stack
{
    int arr[10];
    int top;
};

Stack *create(void)
{
    Stack *stack = malloc(sizeof (Stack));

    if (!stack)
    {
        printf("Memory allocation failed! Exiting program ...\n");
        exit(1);
    }

    stack->top = -1;

    return stack;
}

void push(Stack *stack, int data)
{
    if (overflow(stack))
        printf("Stack overflow! Cannot push data :(\n");
    else
        stack->arr[++(stack->top)] = data;
}

void pop(Stack *stack)
{
    if (underflow(stack))
        printf("Stack underflow! Cannot pop data :(\n");
    else
        printf("%d\n", stack->arr[(stack->top)--]);
}

void top(Stack *stack)
{
    if (underflow(stack))
        printf("Stack underflow! Cannot access data :(\n");
    else
        printf("%d\n", stack->arr[stack->top]);
}

_Bool overflow(Stack *stack)
{
    return length(stack->arr) - 1 == stack->top;
}

_Bool underflow(Stack *stack)
{
    return -1 == stack->top;
}