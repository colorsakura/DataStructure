//
// Created by iflyg on 2022/5/22.
//

#include "queue.h"
#include <stdbool.h>
#include <stdlib.h>

bool init_queue(sequeue *queue) {
    queue->front = 0;
    queue->rear = 0;
    return true;
}

bool is_empty(sequeue queue) {
    return queue.rear == queue.front ? true : false;
}

bool enter_queue(sequeue *queue, int ndata) {
    if ((queue->rear + 1) % MaxSize == queue->front) {
        queue->data[queue->rear] = ndata;
        queue->rear = (queue->rear + 1) % MaxSize;
    } else
        return false;
    return true;
}

bool delete_queue(sequeue *queue, int *ndata) {
    if (!is_empty(*queue)) {
        *ndata = queue->data[queue->front];
        queue->front = (queue->front + 1) % MaxSize;
    } else
        return false;
    return true;
}
