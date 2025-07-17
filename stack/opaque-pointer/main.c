#include "stack.h"
#include "stdio.h"
#define create(newStack) Stack*newStack=create()

int main()
{
    // Stack *s1 = create();
    // Stack *s2 = create();
    // Stack *s3 = create();

    create(s1);

    for (int i = 1; i <= 10; push(s1, i++));

    pop(s1); // 10
    pop(s1); // 9
    pop(s1); // 8
    pop(s1); // 7

    top(s1); // 6
    top(s1); // 6
    top(s1); // 6

    return 0;
}