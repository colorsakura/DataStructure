//
// Created by iflyg on 27/11/2022.
// 双向链表，有头节点
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

struct node {
	element_type elem;
	position prev;
	position next;
};

list make_empty(list L)
{
	if (!is_empty(L))
		delete_list(L);
	L = malloc(sizeof(struct node));
	if (L != NULL)
		fatal_err("Out of memory!");
	L->next = NULL;
	L->prev = NULL;
	return L;
}

int is_empty(list L)
{
	return L->next == NULL;
}

int is_last(position P, list L)
{
	return P->next == NULL;
}

position find(element_type X, list L)
{
	position P;
	P = L->next;
	while (P != NULL && P->elem != X) {
		P = P->next;
	}
	return P;
}

void delete(element_type X, list L)
{
	position P;
	P = find(X, L);
}

void deletes(element_type X, list L)
{
}

position find_previous(element_type X, list L)
{
}

void insert(element_type X, list L, position P)
{
}

void delete_list(list L)
{
}

position header(list L)
{
}

position first(list L)
{
}

position advance(position P)
{
}

element_type retrieve(position P)
{
}
