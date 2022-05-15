#include "../src/seqlist.h"
#include <stdio.h>

int main(void) {
    seqlist *list = seqlist_create();
    student test1 = { 1234, "ZhangShang", 21, 'm' };
    student test2 = { 1235, "LiSi", 11, 'w' };
    seqlist_append(list, test1);
    seqlist_insert(list, test2, 1);
    printf("%d\n", list->length);
    seqlist_print(*list);
    return 0;
}