//
// Created by iflyg on 2/26/2022.
//

#ifndef DATASTRUCTURE_COMPLEX_H
#define DATASTRUCTURE_COMPLEX_H

typedef struct {
    double real;
    double imag;
}Complex;

int add(Complex* r,Complex x, Complex y);

void test_complex();

#endif //DATASTRUCTURE_COMPLEX_H
