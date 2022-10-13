//
// Created by iflyg on 2022/5/22.
// 队列

#include "queue.h"
#include <stdbool.h>

bool init_queue(sequeue *queue) {
    queue->front = 0;
    queue->rear = 0;
    return true;
}

// 空出一个队列位置，方便判断是否为空。
bool is_empty(sequeue queue) {
    return queue.rear == queue.front ? true : false;
}

// 入队
bool enter_queue(sequeue *queue, int ndata) {
    if ((queue->rear + 1) % MaxSize == queue->front)
        return false;
    queue->data[queue->rear] = ndata;
    queue->rear = (queue->rear + 1) % MaxSize;
    return true;
}

// 出队
bool delete_queue(sequeue *queue, int *ndata) {
    if (is_empty(*queue))
        return false;
    *ndata = queue->data[queue->front];
    queue->front = (queue->front + 1) % MaxSize;
    return true;
}

// 获取队首元素
int get_head(sequeue queue) {
    // TODO: 当队空时，会返回异常数据 0，但是程序无法区分返回值是否为异常值。
    return is_empty(queue) ? 0 : queue.data[queue.front];
}
