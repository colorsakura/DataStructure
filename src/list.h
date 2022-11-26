//
// Created by iflyg on 26/11/2022.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H

#define element_type int

struct node;
typedef struct node *ptr_node;
typedef ptr_node list;
typedef ptr_node position;

list make_empty(list L);
int is_empty(list L);
int is_last(position P, list L);
position find(element_type X, list L);
void delete(element_type X, list L);
position find_previous(element_type X, list L);
void insert(element_type X, list L, position P);
void delete_list(list L);
position header(list L);
position first(list L);
position advance(position P);
element_type retrieve(position P);

#endif //DATASTRUCTURE_LIST_H
