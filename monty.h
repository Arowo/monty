#ifndef MONTY_H
#define MONTY_H

typedef struct Stack {
    int data;
    struct Stack *next;
} Stack;

void push(Stack **stack, int data);
void pall(Stack *stack);

#endif /* MONTY_H */
