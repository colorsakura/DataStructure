#include "../src/seqlist.h"
#include <stdio.h>

int main(void) {
    seqlist *list = create();
    student test1 = {1234, "ZhangShang", 21, 'm'};
    append(list, test1);
    printf("%d\n", list->length);
    print_seqlist(*list);
    return 0;
}