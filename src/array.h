//
// Created by iflyg on 3/21/2022.
//

#ifndef DATASTRUCTURE_ARRAY_H
#define DATASTRUCTURE_ARRAY_H

#include "error.h"

#define MAX_LEN 30

// 定义数据元素
typedef struct {
    int id;
    char name[30];
    char sex;// man->m, woman->w
    unsigned int age;
} Node;

Node *create();
status insert(Node *L, Node node, unsigned index);
status delete (Node *L, unsigned index);
int len(Node *L);


#endif//DATASTRUCTURE_ARRAY_H
