//
// Created by iflyg on 2/26/2022.
//
#include <stdio.h>
#include "complex.h"

int add(Complex *r,Complex x, Complex y){
    r->real = x.real + y.real;
    r->imag = x.imag + y.imag;
    return 0;
}

void test_complex() {
    Complex x = {.real = 12, .imag = 13};
    Complex y = {.real = 5, .imag = 6};
    Complex z;
    add(&z, x, y);
    printf("real: %f; imag: %f\n", z.real, z.imag);
}