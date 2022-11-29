//
// Created by iflyg on 26/11/2022.
// 单链表实现，有头节点
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

struct node {
	element_type elem;
	position next;
};

list make_empty(list L)
{
	if (L != NULL)
		delete_list(L);
	L = malloc(sizeof(struct node));
	if (L == NULL) {
		fatal_err("Out of memory!");
	}
	L->next = NULL;
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

//删除首次出现的节点
void delete(element_type X, list L)
{
	position P, tmp;
	P = find_previous(X, L);
	//TODO: is_last(P->next, L)
	if (!is_last(P, L)) {
		tmp = P->next;
		P->next = tmp->next;
		free(tmp);
	}
}

//删除所有出现的 X
void deletes(element_type X, list L)
{
	position P, tmp;
	while ((P = find_previous(X, L)) != NULL) {
		if (!is_last(P, L)) {
			tmp = P->next;
			P->next = tmp->next;
			free(tmp);
		}

	}
}

position find_previous(element_type X, list L)
{
	position P;
	P = L;
	while (P->next != NULL && P->next->elem != X) {
		P = P->next;
	}
	//如果没有 X，应该返回 NULL
	//return P = is_last(P, L)? NULL : P;
	return P;
}

// 在 P 后面插入 X
void insert(element_type X, list L, position P)
{
	position tmp;
	tmp = malloc(sizeof(struct node));
	if (tmp == NULL)
		fatal_err("Out of memory!");
	tmp->elem = X;
	tmp->next = P->next;
	P->next = tmp;
}

void delete_list(list L)
{
	position P, tmp;
	P = L->next;
	L->next = NULL;
	while (P != NULL) {
		tmp = P->next;
		free(P);
		P = tmp;
	}
}

position header(list L)
{
	return L;
}

position first(list L)
{
	return L->next;
}

position advance(position P)
{
	return P->next;
}

element_type retrieve(position P)
{
	return P->elem;
}