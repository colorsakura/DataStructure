//
// Created by iflyg on 29/11/2022.
//

#ifndef CALCULATOR_CAL_STRING_H
#define CALCULATOR_CAL_STRING_H

struct node {
	struct node *next;
	char cont[10];
	char type;
};

void check_string_valid(const char *str);
void remove_blank(char *str);


#endif //CALCULATOR_CAL_STRING_H
