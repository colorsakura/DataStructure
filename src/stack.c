//
// Created by iflyg on 28/11/2022.
//

#include "stack.h"
#include <stdlib.h>
#include <stdbool.h>

struct stack_record {
	int capa;
	int top;
	element_type *array;
};

bool is_full(stack S)
{
	return S->top >= S->capa;
}

bool is_empty(stack S)
{
	return (S->top = -1 ? true : false);
}

stack create_stack(int size)
{
	stack S;
	if (size > MAXSIZE)
		fatal_err("Stack size is too big");
	S = malloc(sizeof(struct stack_record));
	if (S == NULL)
		fatal_err("Out of memory!");
	S->capa = size;
	S->top = -1;
	S->array = malloc(sizeof(element_type) * size);
	//#FIXME: 是否有必要
	//if (S->array == NULL)
	//	fatal_err("Out of memory!");
	return S;
}

void push(element_type X, stack S)
{
	if(is_full(S))
		fatal_err("Stack is full!");
	S->array[S->top] = X;
	S->top++;
}

element_type pop(stack S)
{
}