/* Created by chauncey on 2022/12/2. */

#ifndef DATASTRUCTURE_TREE_H
#define DATASTRUCTURE_TREE_H

#define element_type int

typedef struct tree_node *ptrnode;

struct tree_node {
        element_type elem;
        ptrnode first_child;
        ptrnode next_sibling;
};

#endif /* DATASTRUCTURE_TREE_H */

/* vim: set ai sw=8 ts=8 et: */
