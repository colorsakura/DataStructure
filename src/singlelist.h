#ifndef SINGLELIST_H
#define SINGLELIST_H

#include "error.h"

typedef struct {
    int data;
    struct SingleListNode *next;
}SingleListNode;

typedef SingleListNode *SingleList;
typedef SingleListNode *SingleListIterator;
typedef SingleListNode *SingleListReverseIterator;

SingleList createSingleList();
int isSingleListEmpty(SingleList list);
void destroySingleList(SingleList list);
int getSingleListLength(SingleList list);
int getSingleListValue(SingleList list, int index);
void setSingleListValue(SingleList list, int index, int value);
void addSingleListValue(SingleList list, int value);
void insertSingleListValue(SingleList list, int index, int value);
int removeSingleListValue(SingleList list, int index);
void printSingleList(SingleList list);


#endif // SINGLELIST_H