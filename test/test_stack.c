#include "../src/stack.h"
#include <stdio.h>

int main(void)
{
        stack mystack;
        mystack = create_stack(10);

        for(int i=0;i<10;i++)
                push(i, mystack);

        for(int i=0;i<10;i++) {
                int tmp = pop(mystack);
                printf("%d ", tmp);
        }
        return 0;
}

/* vim: set sw=8 ts=8 et: */