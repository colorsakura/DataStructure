#include "complex/complex.h"
#include "src/array.h"
#include "src/sequentiallist.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    printf("数组测试：\n");
    Node class[2];

    class[0].id = 1;
    strcpy(class[0].name, "Tom");
    class[0].sex = 'm';
    class[0].age = 18;

    class[1].id = 2;
    strcpy(class[1].name, "July");
    class[1].sex = 'w';
    class[1].age = 16;

    printf("id: %d name: %s sex: %c age: %d\n", class[0].id, class[0].name, class[0].sex, class[0].age);
    printf("id: %d name: %s sex: %c age: %d\n", class[1].id, class[1].name, class[1].sex, class[1].age);

    printf("复数类型测试：\n");
    test_complex();

    printf("顺序表测试：\n");
    sqlist books;
    book n = {.name = "你好时间", .price = 50, .isbn = "fdsiajf2123"};
    init_sqlist(&books);
    add_sqlist(&books, n);
    add_sqlist(&books, n);
    add_sqlist(&books, n);
    book m = {"nihao", 40, "fsajfisfjdlsa"};
    insert_sqlist(&books, 2, m);
    delete_sqlist(&books, 2);
    for (unsigned int i = 0; i <= 5; i++) {
        printf("NO.%d: %s\n", i, books.elem[i].name);
    }
    return 0;
}
