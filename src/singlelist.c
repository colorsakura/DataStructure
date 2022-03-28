#include "singlelist.h"
#include <stdlib.h>

SingleList createSingleList() {
    SingleList L;
    L = (SingleList) malloc(sizeof(SingleListNode));
    if (L == NULL) {
        exit(ERR_MEMORY);
    }
    L->data = 0;
    L->next = NULL;
    return L;
}

int isSingleListEmpty(SingleList L) {
    return L->next == NULL;
}

void destroySingleList(SingleList L) {
    SingleList p = L->next;
    while (p != NULL) {
        L->next = p->next;
        free(p);
        p = L->next;
    }
    free(L);
}

int getSingleListLength(SingleList L) {
    int length = 0;
    SingleList p = L->next;
    while (p != NULL) {
        length++;
        p = p->next;
    }
    return length;
}

int getSingleListValue(SingleList L, unsigned location) {
    int length = 0;
    SingleList p = L->next;
    while (p != NULL) {
        if (length == location) {
            return p->data;
        }
        length++;
        p = p->next;
    }
    return -1;
}

void setSingleListValue(SingleList L, unsigned location, int value) {
    if(location > getSingleListLength(L) || location < 0) {
        exit(ERR_INDEX);
    }

    int length = 0;
    SingleList p = L->next;

    while (p != NULL) {
        if (length == location) {
            p->data = value;
            return;
        }
        length++;
        p = p->next;
    }
}

void addSingleListValue(SingleList L, int value) {
    SingleList p = L;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = (SingleList) malloc(sizeof(struct SingleListNode));
    if (p->next == NULL) {
        exit(ERR_MEMORY);
    }
    p->next->data = value;
    p->next->next = NULL;
}

void insertSingleListValue(SingleList L, int value, unsigned location) {
    int length = 0;
    SingleList p = L->next;
    while (p != NULL) {
        if (length == location) {
            SingleList newNode = (SingleList) malloc(sizeof(struct SingleListNode));
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

int removeSingleListValue(SingleList L, unsigned location) {
    int length = 0;
    SingleList p = L->next;
    SingleList q = L;
    while (p != NULL) {
        if (length == location) {
            q->next = p->next;
            free(p);
            return OK;
        }
        length++;
        q = p;
        p = p->next;
    }
}

void printSingleList(SingleList L) {
    SingleList p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}