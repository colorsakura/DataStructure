//
// Created by iflyg on 2022/5/22.
// 队列

#include "queue.h"
#include <stdbool.h>

bool init_queue(sequeue *queue)
{
	queue->front = 0;
	queue->rear = 0;
	queue->size = 0;
	return true;
}

// 空出一个队列位置，方便判断是否为空。
bool is_empty(sequeue queue)
{
	return queue.size == 0;
}

bool is_full(sequeue queue)
{
	return queue.size == MaxSize - 1;
}

// 入队
bool enqueue(sequeue *queue, int ndata)
{
	if ((queue->rear + 1) % MaxSize == queue->front)
		return false;
	queue->data[queue->rear] = ndata;
	queue->rear = (queue->rear + 1) % MaxSize;
	queue->size += 1;
	return true;
}

// 出队
bool dequeue(sequeue *queue, int *ndata)
{
	if (is_empty(*queue))
		return false;
	*ndata = queue->data[queue->front];
	queue->front = (queue->front + 1) % MaxSize;
	queue->size -= 1;
	return true;
}

// 获取队首元素
int get_head(sequeue queue)
{
	// TODO: 当队空时，会返回异常数据 0，但是程序无法区分返回值是否为异常值。
	return is_empty(queue) ? 0 : queue.data[queue.front];
}
