//
// Created by iflyg on 29/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "cal_string.h"

const char valid_char[] = " 0123456789+-*/";

//检查输入字符的合法性 O(n)
void check_string_valid(const char *str)
{
	size_t len = strlen(str);
	size_t valid_char_len = strlen(valid_char);

	bool valid_flag = false;

	printf("size of input string is %d.\n", len);

	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < valid_char_len; j++) {
			if (str[i] == valid_char[j]) {
				valid_flag = true;
				continue;
			}
		}
		if (!valid_flag) {
			printf("invalid string, please check your input...\n");
			exit(1);
		}
		valid_flag = false;
	}
}

//TODO: 移除空格
void remove_blank(char *str) {
	char *tmp = str;
	size_t len = strlen(str);
	for(int i = 0; i < len; i++){

	}
}
