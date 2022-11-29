//
// Created by iflyg on 28/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "cal_string.h"
#define err(str) fprintf(stderr, "%s\n", str), exit(1)

#define MAXSTRING 40 //输入的字符限制

void hello_calculator(void);
void get_input_string(char *);

int main(void)
{
	char input_string[MAXSTRING];

	hello_calculator();

	get_input_string(input_string);

	check_string_valid(input_string);

	return 0;
}

void get_input_string(char *str)
{
	/*gets_s(str, 40);*/ // 超出范围后，异常退出
	/* FIXME: windows clang15 + msvc 无法正常运行 */
	if(fgets(str, 40, stdin) == NULL)
		err("your input string is too long...");
	printf_s("%s\n", str);
}

/* 输出基本信息 */
void hello_calculator(void)
{
	printf_s("Calculator\n");
}
