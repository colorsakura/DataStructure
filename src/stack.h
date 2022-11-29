//
// Created by iflyg on 28/11/2022.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H

#include <stdio.h>

#define MAXSIZE 100
#define fatal_err(str) fprintf(stderr, "%s\n", str), exit(1)
#define element_type int

struct stack_record;
typedef struct stack_record *stack;

stack create_stack(int size);
void push(element_type X, stack S);
element_type pop(stack S);

#endif //DATASTRUCTURE_STACK_H
