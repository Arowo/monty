#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "monty.h"

void push(Stack **stack, int data) {
    Stack *new_node = (Stack *)malloc(sizeof(Stack));
    if (new_node == NULL) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = *stack;
    *stack = new_node;
}

void pall(Stack *stack) {
    Stack *current = stack;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

