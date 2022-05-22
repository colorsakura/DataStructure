#ifndef SINGLELIST_H
#define SINGLELIST_H

#include "error.h"

typedef struct Node SingleListNode;
typedef struct Node {
    int data;            //数据域
    SingleListNode *next;//指针域
} SingleListNode;

typedef SingleListNode *SingleList;

SingleList createSingleList();
int isSingleListEmpty(SingleList list);
void destroySingleList(SingleList list);
int getSingleListLength(SingleList list);
int getSingleListValue(SingleList list, int index);
void setSingleListValue(SingleList list, int index, int value);
void addSingleListValue(SingleList list, int value);
void insertSingleListValue(SingleList list, int index, int value);
void removeSingleListValue(SingleList list, int index);
void printSingleList(SingleList list);


#endif// SINGLELIST_H