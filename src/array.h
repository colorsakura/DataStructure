//
// Created by iflyg on 3/21/2022.
//

#ifndef DATASTRUCTURE_ARRAY_H
#define DATASTRUCTURE_ARRAY_H

#include "error.h"

// 定义数据元素
typedef struct {
    int id;
    char name[30];
    char sex; // man->m, woman->w
    unsigned int age;
} Node;

status insert(Node *L, Node node, unsigned location);
status delete(Node *L, unsigned location);


#endif//DATASTRUCTURE_ARRAY_H
