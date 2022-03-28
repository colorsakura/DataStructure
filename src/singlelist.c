#include "singlelist.h"
#include <stdio.h>
#include <stdlib.h>

__attribute__((unused)) SingleList createSingleList() {
    SingleList L;
    L = (SingleList) malloc(sizeof(SingleListNode));
    if (L == NULL) {
        exit(ERR_MEMORY);
    }
    L->data = 0;
    L->next = NULL;
    return L;
}

__attribute__((unused)) int isSingleListEmpty(SingleList L) {
    return L->next == NULL;
}

__attribute__((unused)) void destroySingleList(SingleList L) {
    SingleList p = (SingleList) L->next;
    while (p != NULL) {
        L->next = p->next;
        free(p);
        p = (SingleList) L->next;
    }
    free(L);
}

__attribute__((unused)) int getSingleListLength(SingleList L) {
    int length = 0;
    SingleList p = (SingleList) L->next;
    while (p != NULL) {
        length++;
        p = (SingleList) p->next;
    }
    return length;
}

__attribute__((unused)) int getSingleListValue(SingleList L, int index) {
    int length = 0;
    SingleList p = (SingleList) L->next;
    while (p != NULL) {
        if (length == index) {
            return p->data;
        }
        length++;
        p = (SingleList) p->next;
    }
    return -1;
}

__attribute__((unused)) void setSingleListValue(SingleList L, int index, int value) {
    if (index > getSingleListLength(L) || index < 0) {
        exit(ERR_INDEX);
    }

    int length = 0;
    SingleList p = (SingleList) L->next;

    while (p != NULL) {
        if (length == index) {
            p->data = value;
            return;
        }
        length++;
        p = (SingleList) p->next;
    }
}

__attribute__((unused)) void addSingleListValue(SingleList L, int value) {
    SingleList p = L;
    while (p->next != NULL) {
        p = (SingleList) p->next;
    }
    p->next = (SingleListNode *) (struct SingleListNode *) (SingleList) malloc(sizeof(SingleListNode));
    if (p->next == NULL) {
        exit(ERR_MEMORY);
    }
    p->next->data = value;
    p->next->next = NULL;
}

__attribute__((unused)) void insertSingleListValue(SingleList L, int value, int index) {
    int length = 0;
    SingleList p = L->next;
    while (p != NULL) {
        if (length == index) {
            SingleList newNode = (SingleList) malloc(sizeof(SingleListNode));
            if (newNode == NULL) {
                exit(ERR_MEMORY);
            }
            newNode->data = value;
            newNode->next = p->next;
            p->next = newNode;
            return;
        }
        length++;
        p = p->next;
    }
}

__attribute__((unused)) void removeSingleListValue(SingleList L, int index) {
    int length = 0;
    SingleList p = L->next;
    SingleList q = L;
    while (p != NULL) {
        if (length == index) {
            q->next = p->next;
            free(p);
            return;
        }
        length++;
        q = p;
        p = p->next;
    }
}

__attribute__((unused)) void printSingleList(SingleList L) {
    SingleList p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}