#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int size;
    float **data;
} Matrix;


void init_matrix(int size, Matrix *m);

void create_matrix(Matrix *m);

Matrix* multiply_matrix(Matrix *m, float x);

Matrix* sum_matrix(Matrix *A, Matrix *B);

void print_matrix(Matrix *m);

void free_matrix(Matrix *m);

#endif //MATRIX_H