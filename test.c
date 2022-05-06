#include "src/array.h"
#include <stdio.h>

int main(void) {
    Node *L = create();
    Node node = {1, "iflyg", 'm', 20};
    insert(L, node, 1);
    printf("L's len is: %d\n", len(L));
    for (int i = 0; i < MAX_LEN; i++) {
        printf("%d\n", L[i].id);
    }
    return 0;
}