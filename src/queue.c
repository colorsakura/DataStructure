//
// Created by iflyg on 2022/5/22.
//

#include "queue.h"

void init_queue(sequeue *queue) {
    queue.front = 0;
    queue.rear = 0;
}

int is_empty(sequeue queue) {
    return queue.rear == queue.front ? true: false;
}

void enter_queue(sequeue *queue, int ndata) {
    if((queue.rear+1) % MaxSize == queue.front) {
        queue.data[queue.rear] = ndata;
        queue.rear++;
    } else exit(-1);
    return ;
}

