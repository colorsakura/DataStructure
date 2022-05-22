//
// Created by iflyg on 3/21/2022.
// 数组实现的线性表。


#ifndef DATASTRUCTURE_ARRAY_H
#define DATASTRUCTURE_ARRAY_H

#include "error.h"

#define MAX_LEN 30
#define ENLARGE_LEN 10

// 定义数据元素
typedef struct {
    int id;
    char name[30];
    char sex;// man->m, woman->w
    unsigned int age;
} Node;

Node *create();
int len(Node *L);
status append(Node *L, Node node);
status insert(Node *L, Node node, unsigned index);
status delete (Node *L, unsigned index);
// int find(Node *L, ...);
Node *combine(Node *L1, Node *L2);
status sort_by_id(Node *L);

#endif//DATASTRUCTURE_ARRAY_H
