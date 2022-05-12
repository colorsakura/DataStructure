#ifndef DATASTRUCT_SEQLIST_H_
#define DATASTRUCT_SEQLIST_H_

#include "error.h"

typedef struct {
    int id;
    char name[20];
    int age;
    char sex;
}student;

typedef struct {
    student *data;
    int length, maxsize;
}seqlist;

seqlist *create();
status append(seqlist *L, student node);
status delete(seqlist *L, int index);
status insert(seqlist *L, student node, int index);
status print_seqlist(seqlist L);

#endif // DATASTRUCT_SEQLIST_H_