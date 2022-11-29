//
// Created by iflyg on 26/11/2022.
//
#include "../src/list.h"
#include <stdlib.h>
#include <stdio.h>

void print_list(list);

int main(void)
{
	list test_list;
	test_list = make_empty(NULL);

	position pt;
	pt = header(test_list);
	print_list(test_list);

	for (int i = 0; i < 10; i++) {
		insert(i, test_list, pt);
		print_list(test_list);
		pt = advance(pt);
	}

//	deletes(2, test_list);
//	print_list(test_list);

	printf("%d\n", retrieve(find_previous(9, test_list)));

	print_list(test_list);

	for (int i = 0; i < 10; i += 2)
		delete (i, test_list);
	print_list(test_list);

	for (int i = 0; i < 10; i++)
		if ((i % 2 == 0) == (find(i, test_list) != NULL))
			printf("Find fails\n");

	printf("Finished deletions\n");

	print_list(test_list);

	delete_list(test_list);
}

void print_list(const list L)
{
	position P = L;
	if (is_empty(L)) {
		printf("Empty list.\n");
	} else {
		do {
			P = advance(P);
			printf("%d ", retrieve(P));
		} while (!is_last(P, L));
		printf("\n");
	}
}