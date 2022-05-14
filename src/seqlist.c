#include "seqlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

seqlist *
seqlist_create() {
    seqlist *list = (seqlist *) malloc(sizeof(seqlist));
    list->data = (student *) malloc(sizeof(student) * 20);
    list->length = 0;
    list->maxsize = 20;
    return list;
}

status
enlarge(seqlist *L) {
    L->data = (student *) realloc(L->data, sizeof(student) * L->maxsize * 2);
    L->maxsize *= 2;
    return OK;
}

status
echo_seqlist(student *s, student n) {
    s->id = n.id;
    strcpy(s->name, n.name);
    s->age = n.age;
    s->sex = n.sex;
    return OK;
}

status
seqlist_append(seqlist *L, student node) {
    if (L->length == L->maxsize - 1) enlarge(L);
    echo_seqlist(L->data + L->length, node);
    L->length++;
    return OK;
}

status
seqlist_remove(seqlist *L, int index) {
    if (0 < index && index <= L->length) {
        for (int i = index; i < L->length; i++) {
            echo_seqlist(L->data + index - 1, L->data[index]);
        }
        L->length--;
    }
    return OK;
}

status
seqlist_insert(seqlist *L, student node, int index) {
    if (L->length == L->maxsize - 1) enlarge(L);
    if (0 < index && index <= L->length) {
        echo_seqlist(L->data + index, L->data[index - 1]);
    }
    echo_seqlist(L->data + index, node);
    L->length++;
    return OK;
}

status
print_seqlist(seqlist L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d\n", L.data[i].id);
        printf("%s\n", L.data[i].name);
        printf("%d\n", L.data[i].age);
        printf("%c\n", L.data[i].sex);
    }
    return OK;
}
