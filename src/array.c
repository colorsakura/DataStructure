//
// Created by iflyg on 3/21/2022.
//

#include "array.h"
#include <stdlib.h>

Node *create() {
    Node *L;
    L = (Node *) malloc(sizeof(Node) * MAX_LEN);
    for (int i = 0; i < MAX_LEN; i++) {
        L++->id = -1;
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

status insert(Node *L, Node node, unsigned index) {
    if (index >= len(L)) {
        exit(-1);
    }
}
