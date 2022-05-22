//
// Created by iflyg on 2022/5/22.
//

#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H

#define MaxSize 30

typedef struct {
    int id;
    char[30] name;
    int age;
} node;

typedef struct {
    node data[MaxSize];
    int front, rear;
} sequeue;

void init_queue(sequeue *queue);
int is_empty(sequeue queue);
void enter_queue(sequeue *queue);
void delete_queue(sequeue *queue);
void get_head(sequeue queue, node *ndata);

#endif//DATASTRUCTURE_QUEUE_H
