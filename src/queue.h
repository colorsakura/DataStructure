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
    int front, rear;
} sequeue;

bool init_queue(sequeue *queue);
bool is_empty(sequeue queue);
bool enter_queue(sequeue *queue, int ndata);  // 入队
bool delete_queue(sequeue *queue, int *ndata);// 出队
int get_head(sequeue queue);

#endif//DATASTRUCTURE_QUEUE_H
