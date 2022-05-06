//
// Created by iflyg on 3/21/2022.
//

#include "array.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

Node *create() {
    Node *L;
    L = (Node *) malloc(sizeof(Node) * MAX_LEN);
    for (int i = 0; i < MAX_LEN; i++) {
        L[i].id = -1;
    }
    return L;
}

int len(Node *L) {
    for (int i = 0; i < MAX_LEN; i++) {
        if (L[i].id == -1) {
            return i;
        }
    }
    return MAX_LEN;
}

status append(Node *L, Node node) {
    int i = len(L);
    if (i == MAX_LEN) {
        return ERR_INDEX;
    }
    L[i].id = node.id;
    strcpy(L[i].name, node.name);
    L[i].sex = node.sex;
    L[i].age = node.age;
    return OK;
}

status insert(Node *L, Node node, unsigned index) {
    status s = OK;
    if (index < len(L)) {
        L[index-1].id = node.id;
        strcpy(L[index-1].name, node.name);
        L[index-1].sex = node.sex;
        L[index-1].age =node.age;
    }
    else s = append(L, node);
    return s;
}

// TODO: achieve find function
int find(Node *L, ...) {
    va_list args;
    va_start(args, L);
    return 0;
}

status enlarge(Node *L) {
    Node *tmpL = (Node *) malloc(sizeof(Node) * (MAX_LEN + ENLARGE_LEN));
    for (int i = 0; i < MAX_LEN; i++) {
        tmpL[i].id = L[i].id;
        strcpy(tmpL[i].name, L[i].name);
        tmpL[i].sex = L[i].sex;
        tmpL[i].age = L[i].age;
    }
    for (int i = MAX_LEN; i < (MAX_LEN + ENLARGE_LEN); i++) {
        tmpL[i].id = -1;
    }
    free(L);
    L = tmpL;
    return OK;
}