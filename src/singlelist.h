#ifndef SINGLELIST_H
#define SINGLELIST_H

#include "error.h"

typedef struct Node SingleListNode;
typedef struct Node {
    int data;
    SingleListNode *next;
}SingleListNode;

typedef SingleListNode *SingleList;

__attribute__((unused)) SingleList createSingleList();
__attribute__((unused)) int isSingleListEmpty(SingleList list);
__attribute__((unused)) void destroySingleList(SingleList list);
__attribute__((unused)) int getSingleListLength(SingleList list);
__attribute__((unused)) int getSingleListValue(SingleList list, int index);
__attribute__((unused)) void setSingleListValue(SingleList list, int index, int value);
__attribute__((unused)) void addSingleListValue(SingleList list, int value);
__attribute__((unused)) void insertSingleListValue(SingleList list, int index, int value);
__attribute__((unused)) void removeSingleListValue(SingleList list, int index);
__attribute__((unused)) void printSingleList(SingleList list);


#endif // SINGLELIST_H