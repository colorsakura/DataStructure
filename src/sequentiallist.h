//
// Created by iflyg on 3/3/2022.
//

#ifndef DATASTRUCTURE_SEQUENTIALLIST_H
#define DATASTRUCTURE_SEQUENTIALLIST_H

#define MAXSIZE 100
#define BOOKSIZE 40
#define ISBNSIZE 30

typedef struct {
    char name[BOOKSIZE];
    double price;
    char isbn[ISBNSIZE];
} book;

typedef struct {
    book *elem;
    unsigned int length;
} sqlist;

int init_sqlist(sqlist *l);

int add_sqlist(sqlist *l, book b);

int insert_sqlist(sqlist *l, int i, book b);

int delete_sqlist(sqlist *l, int i);

int clear_sqlist(sqlist *l);

#endif //DATASTRUCTURE_SEQUENTIALLIST_H
