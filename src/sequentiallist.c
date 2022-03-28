//
// Created by iflyg on 3/3/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "sequentiallist.h"

// 只申请内存空间，暂未作任何处理
int init_sqlist(sqlist *l) {
    l->elem = (book *) malloc(MAXSIZE * sizeof(book));
    if (!l->elem) {
        printf("overflow\n");
        return -1;
    }
    l->length = 0;
    return 0;
}

int add_sqlist(sqlist *l, book b) {
    if (l->length >= MAXSIZE) {
        printf("overflow");
    }
    l->elem[l->length] = b;
    l->length++;
    return 0;
}

//
int insert_sqlist(sqlist *l, int i, book b) {
    if (l->length < i && i < MAXSIZE) {
        printf("overflow\n");
        add_sqlist(l, b);
        return 0;
    } else if (0 <= i < l->length - 1) {
        for (unsigned int j = 0; j < l->length - i; j++) {
            l->elem[l->length - j] = l->elem[l->length - 1 - j];
        }
        l->elem[i] = b;
        l->length++;
        return 0;
    } else {
        printf("overflow\n");
        return -1;
    }
}

int delete_sqlist(sqlist *l, int i) {
    if(0<=i && i<l->length) {
        for (unsigned int j = 1; j < l->length; j++) {
            l->elem[i] = l->elem[i+1];
        }
        l->length--;
    } else {
        printf("overflow\n");
        return -1;
    }
    return 0;
}

int clear_sqlist(sqlist *l) {
    if (l->length);
    else {
        l->length = 0;
    }
    return 0;
}