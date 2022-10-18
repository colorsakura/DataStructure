#include "queue.h"
#include <stdio.h>

void print_queue(sequeue);

int main(void) {
    // 测试队列
    printf("数据结构：队列\n");

    // 定义、初始化队列
    sequeue num_queue;
    init_queue(&num_queue);

    // 入队
    for (int i = 0; i < 10; i++) {
        enter_queue(&num_queue, i);
    }
    print_queue(num_queue);

    printf("Hello World!\n");
    // 出队
    int tmp;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", get_head(num_queue));
        delete_queue(&num_queue, &tmp);
    }
    print_queue(num_queue);

    printf("Hello World!\n");
    return 0;
}

void print_queue(sequeue Q) {
    for (int i = 0; i < ((Q.rear + MaxSize - Q.front) % MaxSize); i++) {
        printf("%d, ", Q.data[(Q.front + i) % MaxSize]);
    }
}