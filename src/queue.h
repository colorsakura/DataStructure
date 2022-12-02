//
// Created by iflyg on 2022/5/22.
//

#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H

#include <stdbool.h>
#define MaxSize 30// 队列最大长度

typedef struct {
    int id;
    char name[30];
    int age;
} node;

typedef struct {
    int data[MaxSize];
    int front, rear, size;
} sequeue;

bool init_queue(sequeue *queue);
bool is_empty(sequeue queue);
bool is_full(sequeue queue);
bool enqueue(sequeue *queue, int ndata);  // 入队
bool dequeue(sequeue *queue, int *ndata);// 出队
int get_head(sequeue queue);

#endif//DATASTRUCTURE_QUEUE_H
